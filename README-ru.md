English | [简体中文](README-zh.md) | [Русский](./README-ru.md) | [Français](./README-fr.md)

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

* `app`
    - `androidMain`
        + install: `gradle -q :androidApp:installDebug`
    - `desktopMain`
        + run: `gradle -q :desktopApp:run -DmainClass=MainKt`
    - `webMain`
        + run:`gradle :webApp:wasmJsBrowserDevelopmentRun`
        + run:`gradle :webApp:jsBrowserDevelopmentRun`
        + Generate artifacts: `gradle :webApp:wasmJsBrowserDistribution`
            * Сгенерированные артефакты находятся в директории:
              `webApp/build/dist/wasmJs/productionExecutable`
            * можно отправить на GitHub pages
    - `server`
        + run: `gradle :server:run`
    - `ios`
        + Чтобы собрать и запустить версию разработки iOS приложения, используйте конфигурацию запуска из виджета запуска в панели инструментов вашей IDE или откройте директорию [/iosApp](./iosApp) в Xcode и запустите оттуда.

---

Узнайте больше о [Kotlin Multiplatform](https://www.jetbrains.com.cn/en-us/help/kotlin-multiplatform-dev/get-started.html), [Compose Multiplatform](https://github.com/JetBrains/compose-multiplatform/#compose-multiplatform), [Kotlin/Wasm](https://kotl.in/wasm/)…

Мы будем благодарны за ваш отзыв о Compose/Web и Kotlin/Wasm в публичном Slack канале [#compose-web](https://slack-chats.kotlinlang.org/c/compose-web). Если вы столкнетесь с какими-либо проблемами, пожалуйста, сообщите о них на [YouTrack](https://youtrack.jetbrains.com/newIssue?project=CMP).

## Лицензия

Этот проект лицензирован под Apache License 2.0 - подробности см. в файле [LICENSE](LICENSE).