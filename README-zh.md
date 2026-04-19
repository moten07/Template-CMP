[English](./README.md) | 简体中文 | [Русский](./README-ru.md) | [Français](./README-fr.md)

# Kotlin 多平台模板

这是一个针对 Android、iOS、Web、桌面 (JVM) 和服务器的 Kotlin 多平台项目。

## 项目结构

* [/androidApp](./androidApp/src) 包含 Android 应用程序。

* [/desktopApp](./desktopApp/src) 包含桌面 (JVM) 应用程序。

* [/iosApp](./iosApp/iosApp) 包含 iOS 应用程序。此应用程序通过 Xcode 管理。

* [/server](./server/src) 包含 Ktor 服务器应用程序。

* [/shared](./shared/src) 包含在所有目标之间共享的代码。最重要子文件夹是 [commonMain](./shared/src/commonMain/kotlin)。

* [/webApp](./webApp/src) 包含针对 JS 和 Wasm 的 Web 应用程序。

## 构建和运行 Android 应用程序

要构建和运行 Android 应用程序的开发版本，请使用 IDE 工具栏中的运行配置小部件，或直接从终端构建：

- 在 macOS/Linux 上
  ```shell
  ./gradlew :androidApp:assembleDebug
  ```
- 在 Windows 上
  ```shell
  .\gradlew.bat :androidApp:assembleDebug
  ```

## 构建和运行桌面 (JVM) 应用程序

要构建和运行桌面应用程序的开发版本，请使用 IDE 工具栏中的运行配置小部件，或直接从终端运行：

- 在 macOS/Linux 上
  ```shell
  ./gradlew :desktopApp:run
  ```
- 在 Windows 上
  ```shell
  .\gradlew.bat :desktopApp:run
  ```

## 构建和运行服务器

要构建和运行服务器的开发版本，请使用 IDE 工具栏中的运行配置小部件，或直接从终端运行：

- 在 macOS/Linux 上
  ```shell
  ./gradlew :server:run
  ```
- 在 Windows 上
  ```shell
  .\gradlew.bat :server:run
  ```

## 构建和运行 Web 应用程序

要构建和运行 Web 应用程序的开发版本，请使用 IDE 工具栏中的运行配置小部件，或直接从终端运行：

- 对于 JS 目标：
    - 在 macOS/Linux 上
      ```shell
      ./gradlew :webApp:jsBrowserDevelopmentRun
      ```
    - 在 Windows 上
      ```shell
      .\gradlew.bat :webApp:jsBrowserDevelopmentRun
      ```
- 对于 Wasm 目标：
    - 在 macOS/Linux 上
      ```shell
      ./gradlew :webApp:wasmJsBrowserDevelopmentRun
      ```
    - 在 Windows 上
      ```shell
      .\gradlew.bat :webApp:wasmJsBrowserDevelopmentRun
      ```

## 构建和运行 iOS 应用程序

要构建和运行 iOS 应用程序的开发版本，请使用 IDE 工具栏中的运行配置小部件，或在 Xcode 中打开 [/iosApp](./iosApp) 目录并从那里运行。

---

了解更多关于 [Kotlin 多平台](https://www.jetbrains.com.cn/en-us/help/kotlin-multiplatform-dev/get-started.html)、[Compose 多平台](https://github.com/JetBrains/compose-multiplatform/#compose-multiplatform)、[Kotlin/Wasm](https://kotl.in/wasm/)…

我们非常感谢您在公共 Slack 频道 [#compose-web](https://slack-chats.kotlinlang.org/c/compose-web) 中对 Compose/Web 和 Kotlin/Wasm 的反馈。如果您遇到任何问题，请在 [YouTrack](https://youtrack.jetbrains.com/newIssue?project=CMP) 上报告。

## 许可证

本项目采用 Apache License 2.0 许可证 - 详情请见 [LICENSE](LICENSE) 文件。