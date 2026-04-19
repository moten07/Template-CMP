English | [简体中文](README-zh.md) | [Русский](./README-ru.md) | [Français](./README-fr.md)

# Kotlin Multiplatform Template

This is a Kotlin Multiplatform project targeting Android, iOS, Web, Desktop (JVM), and Server.

## Project Structure

* [/androidApp](./androidApp/src) contains the Android application.

* [/desktopApp](./desktopApp/src) contains the Desktop (JVM) application.

* [/iosApp](./iosApp/iosApp) contains the iOS application. This is managed via Xcode.

* [/server](./server/src) contains the Ktor server application.

* [/shared](./shared/src) contains the code shared across all targets. The most important subfolder is [commonMain](./shared/src/commonMain/kotlin).

* [/webApp](./webApp/src) contains the Web application targeting JS and Wasm.

## Build and Run Android Application

To build and run the development version of the Android app, use the run configuration from the run widget in your IDE’s toolbar or build it directly from the terminal:

- on macOS/Linux
  ```shell
  ./gradlew :androidApp:assembleDebug
  ```
- on Windows
  ```shell
  .\gradlew.bat :androidApp:assembleDebug
  ```

## Build and Run Desktop (JVM) Application

To build and run the development version of the desktop app, use the run configuration from the run widget in your IDE’s toolbar or run it directly from the terminal:

- on macOS/Linux
  ```shell
  ./gradlew :desktopApp:run
  ```
- on Windows
  ```shell
  .\gradlew.bat :desktopApp:run
  ```

## Build and Run Server

To build and run the development version of the server, use the run configuration from the run widget in your IDE’s toolbar or run it directly from the terminal:

- on macOS/Linux
  ```shell
  ./gradlew :server:run
  ```
- on Windows
  ```shell
  .\gradlew.bat :server:run
  ```

## Build and Run Web Application

To build and run the development version of the web app, use the run configuration from the run widget in your IDE's toolbar or run it directly from the terminal:

- for the JS target:
    - on macOS/Linux
      ```shell
      ./gradlew :webApp:jsBrowserDevelopmentRun
      ```
    - on Windows
      ```shell
      .\gradlew.bat :webApp:jsBrowserDevelopmentRun
      ```
- for the Wasm target:
    - on macOS/Linux
      ```shell
      ./gradlew :webApp:wasmJsBrowserDevelopmentRun
      ```
    - on Windows
      ```shell
      .\gradlew.bat :webApp:wasmJsBrowserDevelopmentRun
      ```

## Build and Run iOS Application

To build and run the development version of the iOS app, use the run configuration from the run widget in your IDE’s toolbar or open the [/iosApp](./iosApp) directory in Xcode and run it from there.

---

Learn more about [Kotlin Multiplatform](https://www.jetbrains.com.cn/en-us/help/kotlin-multiplatform-dev/get-started.html), [Compose Multiplatform](https://github.com/JetBrains/compose-multiplatform/#compose-multiplatform), [Kotlin/Wasm](https://kotl.in/wasm/)…

We would appreciate your feedback on Compose/Web and Kotlin/Wasm in the public Slack channel [#compose-web](https://slack-chats.kotlinlang.org/c/compose-web). If you face any issues, please report them on [YouTrack](https://youtrack.jetbrains.com/newIssue?project=CMP).

## License

This project is licensed under the Apache License 2.0 - see the [LICENSE](LICENSE) file for details.