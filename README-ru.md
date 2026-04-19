English | [简体中文](README-zh.md) | Русский | [Français](./README-fr.md)

# Шаблон Kotlin Multiplatform

Это проект Kotlin Multiplatform, ориентированный на Android, iOS, Web, Desktop (JVM) и Server.

## Структура проекта

* [/androidApp](./androidApp/src) содержит Android приложение.

* [/desktopApp](./desktopApp/src) содержит Desktop (JVM) приложение.

* [/iosApp](./iosApp/iosApp) содержит iOS приложение. Оно управляется через Xcode.

* [/server](./server/src) содержит серверное приложение Ktor.

* [/shared](./shared/src) содержит код, общий для всех целей. Самая важная подпапка - [commonMain](./shared/src/commonMain/kotlin).

* [/webApp](./webApp/src) содержит веб-приложение, ориентированное на JS и Wasm.

## Сборка и запуск Android приложения

Чтобы собрать и запустить версию разработки Android приложения, используйте конфигурацию запуска из виджета запуска в панели инструментов вашей IDE или соберите его напрямую из терминала:

- на macOS/Linux
  ```shell
  ./gradlew :androidApp:assembleDebug
  ```
- на Windows
  ```shell
  .\gradlew.bat :androidApp:assembleDebug
  ```

## Сборка и запуск Desktop (JVM) приложения

Чтобы собрать и запустить версию разработки desktop приложения, используйте конфигурацию запуска из виджета запуска в панели инструментов вашей IDE или запустите его напрямую из терминала:

- на macOS/Linux
  ```shell
  ./gradlew :desktopApp:run
  ```
- на Windows
  ```shell
  .\gradlew.bat :desktopApp:run
  ```

## Сборка и запуск сервера

Чтобы собрать и запустить версию разработки сервера, используйте конфигурацию запуска из виджета запуска в панели инструментов вашей IDE или запустите его напрямую из терминала:

- на macOS/Linux
  ```shell
  ./gradlew :server:run
  ```
- на Windows
  ```shell
  .\gradlew.bat :server:run
  ```

## Сборка и запуск веб-приложения

Чтобы собрать и запустить версию разработки веб-приложения, используйте конфигурацию запуска из виджета запуска в панели инструментов вашей IDE или запустите его напрямую из терминала:

- для цели JS:
    - на macOS/Linux
      ```shell
      ./gradlew :webApp:jsBrowserDevelopmentRun
      ```
    - на Windows
      ```shell
      .\gradlew.bat :webApp:jsBrowserDevelopmentRun
      ```
- для цели Wasm:
    - на macOS/Linux
      ```shell
      ./gradlew :webApp:wasmJsBrowserDevelopmentRun
      ```
    - на Windows
      ```shell
      .\gradlew.bat :webApp:wasmJsBrowserDevelopmentRun
      ```

## Сборка и запуск iOS приложения

Чтобы собрать и запустить версию разработки iOS приложения, используйте конфигурацию запуска из виджета запуска в панели инструментов вашей IDE или откройте директорию [/iosApp](./iosApp) в Xcode и запустите оттуда.

---

Узнайте больше о [Kotlin Multiplatform](https://www.jetbrains.com.cn/en-us/help/kotlin-multiplatform-dev/get-started.html), [Compose Multiplatform](https://github.com/JetBrains/compose-multiplatform/#compose-multiplatform), [Kotlin/Wasm](https://kotl.in/wasm/)…

Мы будем благодарны за ваш отзыв о Compose/Web и Kotlin/Wasm в публичном Slack канале [#compose-web](https://slack-chats.kotlinlang.org/c/compose-web). Если вы столкнетесь с какими-либо проблемами, пожалуйста, сообщите о них на [YouTrack](https://youtrack.jetbrains.com/newIssue?project=CMP).

## Лицензия

Этот проект лицензирован под Apache License 2.0 - подробности см. в файле [LICENSE](LICENSE).