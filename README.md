
# Qt SQL Driver Checker

A lightweight C++ utility built with Qt 6.6 to list available Qt SQL drivers and verify whether the MySQL (`QMYSQL`) driver is available in the current Qt environment.

## Features

- Lists all available Qt SQL drivers.
- Checks whether the `QMYSQL` driver is available.
- Displays Qt plugin search paths for troubleshooting.
- Helps diagnose missing Qt SQL driver plugins.

## Requirements

- Qt 6.6.x
- C++17 compatible compiler
- CMake 3.16 or later
- Qt SQL module

## Build

1. Download or clone the repository:

   ```bash
   git clone https://github.com/h-hosseini/AvailableSqlDrivers.git
   cd AvailableSqlDrivers
   ```

2. Open the project in Qt Creator and select your Qt kit.

3. Configure and build the project using CMake.

## Usage

Run the executable to display the available SQL drivers and Qt plugin paths.

Example output:

```text
Qt SQL drivers: QList("QSQLITE", "QMIMER", "QODBC", "QPSQL")
Plugin paths: QList(...)
ERROR: QMYSQL driver is missing.
```

The output above is an example. Available drivers depend on the installed Qt plugins and their runtime dependencies.

## Purpose

This utility was created to troubleshoot Qt SQL driver availability, particularly when configuring MySQL connectivity in Qt applications on Windows.
