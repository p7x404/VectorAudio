#pragma once
#include <toml.hpp>
#include <string>
#include <thread>
#include <iostream>
#include <SFML/Config.hpp>
#include <filesystem>

namespace afv_unix {

    class configuration {
        public:
        static toml::value config;

        static inline std::string file_path = "config.toml";

        static void build_config();

        static std::string get_resource_folder();

        //
        // TODO fix potential concurrency if the user changes config while still writing
        //
        static void write_config_async();
    };
    
}