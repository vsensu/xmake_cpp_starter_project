-- project
set_project("hello")

-- set project version
set_version("1.0.0", {build = "%Y%m%d%H%M"})

-- set language
set_languages("c99", "cxx20")

add_rules("mode.debug", "mode.release", "mode.minsizerel")

-- include project sources
includes("deps", "src", "test", "demo")

task("ie")
    on_run("scripts/tasks/init_env")
    set_menu {
        usage = "xmake ie",
        description = "init env!",
        options = {}
    } 

task("dc")
    on_run("scripts/tasks/dist_clean")
    set_menu {
        usage = "xmake dc",
        description = "deep clean",
        options = {}
    }
