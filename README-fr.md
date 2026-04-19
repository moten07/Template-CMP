English | [简体中文](README-zh.md) | [Русский](./README-ru.md) | Français

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

Pour construire et exécuter la version de développement de l'application Android, utilisez la configuration d'exécution du widget d'exécution dans la barre d'outils de votre IDE ou construisez-la directement depuis le terminal :

- sur macOS/Linux
  ```shell
  ./gradlew :androidApp:assembleDebug
  ```
- sur Windows
  ```shell
  .\gradlew.bat :androidApp:assembleDebug
  ```

## Construire et exécuter l'application Desktop (JVM)

Pour construire et exécuter la version de développement de l'application desktop, utilisez la configuration d'exécution du widget d'exécution dans la barre d'outils de votre IDE ou exécutez-la directement depuis le terminal :

- sur macOS/Linux
  ```shell
  ./gradlew :desktopApp:run
  ```
- sur Windows
  ```shell
  .\gradlew.bat :desktopApp:run
  ```

## Construire et exécuter le serveur

Pour construire et exécuter la version de développement du serveur, utilisez la configuration d'exécution du widget d'exécution dans la barre d'outils de votre IDE ou exécutez-le directement depuis le terminal :

- sur macOS/Linux
  ```shell
  ./gradlew :server:run
  ```
- sur Windows
  ```shell
  .\gradlew.bat :server:run
  ```

## Construire et exécuter l'application Web

Pour construire et exécuter la version de développement de l'application web, utilisez la configuration d'exécution du widget d'exécution dans la barre d'outils de votre IDE ou exécutez-la directement depuis le terminal :

- pour la cible JS :
    - sur macOS/Linux
      ```shell
      ./gradlew :webApp:jsBrowserDevelopmentRun
      ```
    - sur Windows
      ```shell
      .\gradlew.bat :webApp:jsBrowserDevelopmentRun
      ```
- pour la cible Wasm :
    - sur macOS/Linux
      ```shell
      ./gradlew :webApp:wasmJsBrowserDevelopmentRun
      ```
    - sur Windows
      ```shell
      .\gradlew.bat :webApp:wasmJsBrowserDevelopmentRun
      ```

## Construire et exécuter l'application iOS

Pour construire et exécuter la version de développement de l'application iOS, utilisez la configuration d'exécution du widget d'exécution dans la barre d'outils de votre IDE ou ouvrez le répertoire [/iosApp](./iosApp) dans Xcode et exécutez-le depuis là.

---

En savoir plus sur [Kotlin Multiplatform](https://www.jetbrains.com.cn/en-us/help/kotlin-multiplatform-dev/get-started.html), [Compose Multiplatform](https://github.com/JetBrains/compose-multiplatform/#compose-multiplatform), [Kotlin/Wasm](https://kotl.in/wasm/)…

Nous apprécierions vos commentaires sur Compose/Web et Kotlin/Wasm dans le canal Slack public [#compose-web](https://slack-chats.kotlinlang.org/c/compose-web). Si vous rencontrez des problèmes, veuillez les signaler sur [YouTrack](https://youtrack.jetbrains.com/newIssue?project=CMP).

## Licence

Ce projet est sous licence Apache License 2.0 - voir le fichier [LICENSE](LICENSE) pour plus de détails.