find . -type f -name "*.sh" -exec basename {} ';' | sed 's/.sh$//'
