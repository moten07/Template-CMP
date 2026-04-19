English | [简体中文](README-zh.md) | [Русский](./README-ru.md) | [Français](./README-fr.md)

# Modèle Kotlin Multiplatform

Il s'agit d'un projet Kotlin Multiplatform ciblant Android, iOS, Web, Desktop (JVM) et Server.

## Structure du projet

* [/androidApp](./androidApp/src) contient l'application Android.

* [/desktopApp](./desktopApp/src) contient l'application Desktop (JVM).

* [/iosApp](./iosApp/iosApp) contient l'application iOS. Celle-ci est gérée via Xcode.

* [/server](./server/src) contient l'application serveur Ktor.

* [/shared](./shared/src) contient le code partagé entre toutes les cibles. Le sous-dossier le plus important est [commonMain](./shared/src/commonMain/kotlin).

* [/webApp](./webApp/src) contient l'application Web ciblant JS et Wasm.

## Construire et exécuter l'application Android

* `app`
    - `androidMain`
        + install: `gradle -q :androidApp:installDebug`
    - `desktopMain`
        + run: `gradle -q :desktopApp:run -DmainClass=MainKt`
    - `webMain`
        + run:`gradle :webApp:wasmJsBrowserDevelopmentRun`
        + run:`gradle :webApp:jsBrowserDevelopmentRun`
        + Generate artifacts: `gradle :webApp:wasmJsBrowserDistribution`
            * Les artefacts générés se trouvent dans le répertoire :
              `webApp/build/dist/wasmJs/productionExecutable`
            * peut être poussé vers GitHub pages
    - `server`
        + run: `gradle :server:run`
    - `ios`
        + Pour construire et exécuter la version de développement de l'application iOS, utilisez la configuration d'exécution du widget d'exécution dans la barre d'outils de votre IDE ou ouvrez le répertoire [/iosApp](./iosApp) dans Xcode et exécutez-le depuis là.

---

En savoir plus sur [Kotlin Multiplatform](https://www.jetbrains.com.cn/en-us/help/kotlin-multiplatform-dev/get-started.html), [Compose Multiplatform](https://github.com/JetBrains/compose-multiplatform/#compose-multiplatform), [Kotlin/Wasm](https://kotl.in/wasm/)…

Nous apprécierions vos commentaires sur Compose/Web et Kotlin/Wasm dans le canal Slack public [#compose-web](https://slack-chats.kotlinlang.org/c/compose-web). Si vous rencontrez des problèmes, veuillez les signaler sur [YouTrack](https://youtrack.jetbrains.com/newIssue?project=CMP).

## Licence

Ce projet est sous licence Apache License 2.0 - voir le fichier [LICENSE](LICENSE) pour plus de détails.