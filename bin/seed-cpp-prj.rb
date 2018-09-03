require 'fileutils'
require 'pathname'

require 'compositeLogDevice'

def copyCppFile(logger, etcPathname, srcPathname)
  srcFilePathname = etcPathname + "cpp/main.cpp"
  dstDirPathname = srcPathname

  logger.info("Copying file #{srcFilePathname}...")
  FileUtils.cp(srcFilePathname, dstDirPathname)
  
  logger.info("Copied file.")
end

def copyVscodeFiles(logger, etcPathname, rootPathname)
  dstDirPathname = rootPathname + ".vscode"
  if !dstDirPathname.exist?
    logger.info("Creating directory: #{dstDirPathname}...")
    FileUtils.mkdir_p(dstDirPathname)
  end

  srcFile1Pathname = etcPathname + "vscode/c_cpp_properties.json"
  logger.info("Copying file #{srcFile1Pathname}...")
  FileUtils.cp(srcFile1Pathname, dstDirPathname)

  srcFile2Pathname = etcPathname + "vscode/launch.json"
  logger.info("Copying file #{srcFile2Pathname}...")
  FileUtils.cp(srcFile2Pathname, dstDirPathname)

  srcFile3Pathname = etcPathname + "vscode/settings.json"
  logger.info("Copying file #{srcFile3Pathname}...")
  FileUtils.cp(srcFile3Pathname, dstDirPathname)

  srcFile4Pathname = etcPathname + "vscode/tasks.json"
  logger.info("Copying file #{srcFile4Pathname}...")
  FileUtils.cp(srcFile4Pathname, dstDirPathname)

  logger.info("Copied files.")
end

# Assume root path is one level up (from bin)
rootPathname = Pathname.new(Dir.pwd).parent
if !rootPathname.exist?
  puts "Root path does not exist: #{rootPathname}"
  exit 1
end

logPathname = rootPathname + "log"
if !logPathname.exist?
  puts "Creating directory: #{logPathname}..."
  FileUtils.mkdir_p(logPathname)
end

logDevices = Array.new
logDevices << Logger::LogDevice.new(STDOUT)
logDevices << Logger::LogDevice.new(logPathname + "seed-cpp-prj.log")
logger = Logger.new(CompositeLogDevice.new(logDevices))
logger.level = Logger::INFO
logger.datetime_format = "%Y-%m-%d %H:%M:%S"

bldPathname = rootPathname + "bld"
if !bldPathname.exist?
  logger.info("Creating directory: #{bldPathname}...")
  FileUtils.mkdir_p(bldPathname)
end

etcPathname = rootPathname + "etc"
if !etcPathname.exist?
  logger.info("Creating directory: #{etcPathname}...")
  FileUtils.mkdir_p(etcPathname)
end

srcPathname = rootPathname + "src"
if !srcPathname.exist?
  logger.info("Creating directory: #{srcPathname}...")
  FileUtils.mkdir_p(srcPathname)
end

copyCppFile(logger, etcPathname, srcPathname)
copyVscodeFiles(logger, etcPathname, rootPathname)


