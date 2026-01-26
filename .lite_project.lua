local config = require "core.config"

config.plugins.build.targets = {
  { build_directory = "build", type = "cmake" }
}

