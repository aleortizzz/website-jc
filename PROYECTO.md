# JC Barandas — Sitio Web

Sitio web de presentación/portfolio para **JC Barandas**, una empresa dedicada a la fabricación e instalación de **barandas de acero inoxidable y vidrio templado**. Desarrollado por *TizDigital*.

## Objetivo del sitio

Landing page comercial pensada para captar clientes: muestra el trabajo de la empresa, genera confianza (testimonios, características, proyectos realizados) y termina en un formulario de contacto que deriva a WhatsApp o email.

## Estructura del sitio

- **[index.html](index.html)** — Página principal, con las siguientes secciones:
  - `section-inicio` — Hero principal ("Barandas de Diseño")
  - `sobre-nosotros` — Presentación de la empresa + opiniones/testimonios de clientes
  - `section-proyectos` — Destacado de proyectos realizados (carrusel + grid). **Pendiente de rehacer con los 6 proyectos reales** — todavía tiene contenido placeholder ("Proyecto San Isidro", "Proyecto Andina", ubicaciones/años inventados).
  - `section-especificaciones` — "Nos caracteriza" (diferenciales de la empresa)
  - `modelos` — Vista previa de los modelos/estilos de baranda ofrecidos
  - `section-contacto` — Formulario de contacto (nombre, interés, contacto, zona, mensaje) con botones de envío por **WhatsApp** y **email**
  - Footer con redes sociales (Instagram, WhatsApp, Facebook)

- **[modelos/](modelos/)** — Páginas de detalle de modelos de barandas (son las que aparecen en el desplegable "Modelos" del nav):
  - [vid_tem_bot.html](modelos/vid_tem_bot.html) — Vidrio templado y botones
  - [vid_tem_minipostes.html](modelos/vid_tem_minipostes.html) — Vidrio templado y minipostes
  - [vid_tem_estructura.html](modelos/vid_tem_estructura.html) — Vidrio templado y estructura de acero inoxidable
  - [barandas_exterior.html](modelos/barandas_exterior.html) — Barandas de exterior
  - [otros.html](modelos/otros.html) — Otros trabajos a medida

- **[proyectos/](proyectos/)** — Casos de estudio de proyectos realizados:
  - _(`sanisidro.html` — era la plantilla base con fotos de stock, **eliminada** una vez que los 6 proyectos reales quedaron armados. La estructura que definía — hero, sobre el proyecto, materiales/detalles técnicos, galería, CTA — ya está replicada en las 6 páginas reales; usar cualquiera de ellas como base para nuevos proyectos. También se había descartado antes una `proyecto_template.html` alternativa.)_
  - [carilo.html](proyectos/carilo.html) — Primer proyecto real armado con este patrón: barandas de vidrio templado sin marco en balcones/terrazas de una vivienda en Cariló. Fotos en `src/imgs/proyecto_carilo/` (`carilo_banner.jpg` + `carilo_1.jpg` a `carilo_5.jpg`). De paso se corrigió, para esta página, un bug que venía de la plantilla en Materiales (tarjeta "Acero inoxidable" repetida dos veces) — acá son 3 categorías distintas (Vidrio templado / Acero inoxidable / Herrajes y fijaciones).
  - [costa_esmeralda.html](proyectos/costa_esmeralda.html) — Barandas de vidrio templado + estructura de acero inoxidable en balcones/terrazas de una vivienda en Costa Esmeralda. Fotos en `src/imgs/proyecto_costa_esmeralda/` (`costa_esmeralda_banner.jpg` + `costa_esmeralda_1.jpg` a `costa_esmeralda_6.jpg`).
  - [haras_santa_maria.html](proyectos/haras_santa_maria.html) — Baranda de acero inoxidable y vidrio en entrepiso/escalera de una vivienda en Haras Santa María. Fotos en `src/imgs/proyecto_haras_santa_maria/` (solo 4 fotos disponibles: banner + 1 + 2 de galería).
  - [tigre.html](proyectos/tigre.html) — Barandas de vidrio y acero inoxidable en balcones de un edificio en Tigre. Fotos en `src/imgs/proyecto_tigre/`.
  - [tenaris.html](proyectos/tenaris.html) — Baranda de acero inoxidable y vidrio en la escalera principal del edificio Tenaris. Fotos en `src/imgs/proyecto_tenaris/`.
  - [talar_del_lago_2.html](proyectos/talar_del_lago_2.html) — Baranda de acero inoxidable y vidrio en escalera/entrepiso de una vivienda en Talar del Lago 2. Fotos en `src/imgs/proyecto_talar_del_lago_2/`. Nota: quedó `IMG_20230312_220001.jpg` sin usar/renombrar en esa carpeta (había una foto de más).
  - **Las 6 páginas de proyectos reales están completas** con el mismo patrón: banner + imagen "Sobre el proyecto" + materiales (3 categorías) + galería de 3 a 6 fotos + CTA, todas con alt text real, `width`/`height`, compresión y `og:image` propio. El copy de todas sigue el criterio de foco en la baranda, no en la arquitectura de la casa.
  - La imagen de "Sobre el proyecto" tiene `h-[480px] object-cover` (además de `width`/`height` reales para el navegador) para que se vea del mismo tamaño en todas las páginas — antes cada una tenía su tamaño natural y algunas (Tenaris) quedaban gigantes y pedían scroll para verse completas.
  - **Banner (header hero) — probado y revertido.** El problema real: fotos angostas/verticales (Haras Santa María es 897×1920, sin ninguna horizontal disponible) se pixelan al estirarse como fondo ancho con `background-size: cover`. Se probaron dos soluciones: achicar la altura (`h-[28vh]` — no sirve, `cover` igual agranda la imagen lo mismo horizontalmente sin importar la altura del contenedor) y un diseño de 3 capas con fondo `blur-2xl` + foto sin estirar centrada encima (sí soluciona el pixelado, probado y confirmado que se ve bien). A pedido del usuario **se volvió al banner original** (`h-[40vh] bg-cover bg-center`, simple, sin las capas de blur) en las 6 páginas de proyecto — va a pedirle al cliente fotos sacadas en horizontal para Haras Santa María y Costa Esmeralda en vez de complicar el CSS. Si en el futuro se quiere retomar el diseño con blur, la receta está en el historial de esta conversación.

- **[src/](src/)** — Assets del proyecto:
  - `input.css` / `output.css` — Estilos generados con Tailwind CSS
  - `imgs/` — Imágenes del sitio (logo, favicon, fotos de proyectos, hero, taller, etc.)

- **[partials/](partials/)** — Header y footer compartidos entre páginas:
  - [header.inc](partials/header.inc) — Nav mobile + nav desktop (una sola vez, en vez de repetido en cada página)
  - [footer.inc](partials/footer.inc) — Footer + botón flotante de WhatsApp
  - Extensión `.inc` (no `.html`) a propósito: son fragmentos, no páginas completas. Editores como el "Live Preview" de VS Code le inyectan un script de auto-recarga a cualquier `.html` que sirven, y como estos archivos no tienen `<html>`/`<body>` propios, esa inyección los corta a la mitad. Con `.inc` no se meten.
  - **IIS (Ferozo)** no sirve `.inc` por defecto (extensión desconocida → `404.3`). Por eso `web.config` mapea `.inc` como `text/html`. Si se agregan parciales con otra extensión rara, mapearla también.
  - "Proyectos" en el nav (desktop y mobile) ya es un desplegable igual que "Modelos", con los 6 proyectos reales (Cariló, Costa Esmeralda, Haras Santa María, Tigre, Edificio Tenaris, Talar del Lago 2). El link de "Proyectos" en el footer (columna "Navegación") se dejó como estaba, apuntando a `#section-proyectos` de la home — no se convirtió en desplegable ahí porque no se pidió y el footer no tiene ese patrón para "Modelos" tampoco.

- **[include.js](include.js)** — Carga `partials/header.inc` y `partials/footer.inc` por `fetch()` en los `<div id="header-placeholder">` / `<div id="footer-placeholder">` de cada página, e inicializa el comportamiento del nav (menú mobile, efecto de scroll) y el año del footer. Se referencia como `<script src="/include.js"></script>` en cada página.

## Stack tecnológico

- **Tailwind CSS** (con `tailwindcss-animated`) para estilos, compilado desde [src/input.css](src/input.css) a [src/output.css](src/output.css)
- **DaisyUI** como librería de componentes sobre Tailwind
- **Swiper** para carruseles (probablemente testimonios/galerías)
- **Lucide** para iconos
- Sitio estático en HTML puro (sin framework de JS tipo React/Vue) — no requiere build de JS, solo de CSS

## Scripts disponibles

```bash
npm run tailwind   # Compila y observa cambios en el CSS (input.css -> output.css)
```

## Notas

- Repo en GitHub: `aleortizzz/website-jc`
- **Hosting**: **DonWeb / panel Ferozo**, servidor **Windows / IIS** (IP `200.58.122.207`). Cuenta `w1750584`. Raíz web: `public_html`. Todos los dominios del plan sirven esa misma carpeta. Es la cuenta que ya tenía los correos de `jcherrajes.com` (mismo cliente; "JC Herrajes" es el nombre viejo, ahora "JC Barandas"). La web vieja de jcherrajes.com que estaba en `public_html` se respaldó y se reemplaza por este sitio.
- **Deploy**: **GitHub Actions → FTP** (`.github/workflows/deploy.yml`). La integración Git nativa de DonWeb no funciona en este plan Windows. En cada `push` a `main`, el workflow sube el sitio por **FTP plano** a `public_html` con `SamKirkland/FTP-Deploy-Action` (el plan de Ferozo no soporta FTPS — se probó `ftps` y `ftps-legacy`, los dos fallan). **Seguridad**: como el FTP va sin encriptar, la contraseña de `w1750584@jcherrajes.com` debería ser fuerte y random (cambiarla en el panel Ferozo y actualizar el secret `FTP_PASSWORD` en GitHub). Da acceso de escritura a toda la web. Secrets en GitHub (Settings → Secrets and variables → Actions): `FTP_SERVER=w1750584.ferozo.com`, `FTP_USERNAME=w1750584@jcherrajes.com`, `FTP_PASSWORD=<la del panel Ferozo>`. El workflow excluye del upload la tooling y las docs internas (`PROYECTO.md`, `notes.txt`, `package*.json`, configs, `.github/`, etc.), así que esos archivos **no llegan al servidor**.
- **Config de servidor**: `web.config` (IIS), reemplaza al `.htaccess` (Windows no usa `.htaccess`). Hoy tiene solo lo mínimo (default document + caché). El bloque CUTOVER (forzar HTTPS + dominio canónico + bloquear internos) está comentado adentro del `web.config` y se descomenta al migrar; necesita el módulo "URL Rewrite" de IIS (si tira 500, pedirlo a soporte DonWeb).
- El formulario de contacto envía los mails vía **EmailJS** (service/template configurados en el `<script>` de [index.html](index.html)); no hay backend propio.
- El header/footer compartido (`partials/`) se carga con `fetch()`, que **no funciona abriendo el HTML directo desde el explorador de archivos** (`file://...`). Para probar en local hace falta un servidor HTTP simple (ej. extensión "Live Server" de VS Code, o `npx serve`). En Hostinger va a andar normal porque ahí sí se sirve por HTTP.
- Los links del nav/footer a secciones de la home (Inicio, Proyectos, etc.) ahora apuntan siempre a `/index.html#section-...`, incluso estando ya en la home — antes hacían scroll suave sin recargar. Es la contra de tener un solo header compartido; si se nota molesto se puede revisar más adelante.
- El nav de escritorio (con los 5 modelos + Proyectos + Especificaciones + Contacto + mail) necesita bastante ancho para no amontonarse. Por eso el menú hamburguesa se usa hasta los 1280px de ancho de pantalla, y recién de ahí para arriba se ve el menú horizontal completo.
- `vid_tem_minipostes.html` ya tiene sus fotos reales (`src/imgs/vid_tem_minpostes/`, nota: la carpeta quedó con ese typo — falta la "i" de "minipostes" — no lo corregí para no romper los links, se puede renombrar más adelante si se quiere prolijo).
- `vid_tem_estructura.html` ya tiene sus fotos reales (`src/imgs/vid_tem_estructura/`, esta carpeta sin typo).
- `barandas_exterior.html` ya tiene sus fotos reales (`src/imgs/baranda_exterior/` — ojo, la carpeta está en singular "baranda", la página en plural "barandas", otro nombre que no coincide exacto pero funciona).
- `otros.html` ya tiene sus fotos reales (`src/imgs/otros/`). Con esto, **las 5 páginas de modelos ya tienen todas fotos reales** — no queda ninguna con el placeholder de `vid_tem_bot`.
- **Nota técnica sobre comprimir imágenes nuevas**: la librería que uso (`sharp`) a veces deja el archivo "tomado" un rato después de leerlo, y si se intenta sobreescribir el mismo archivo en el mismo proceso de Node, falla. La solución que funciona: comprimir y guardar en un archivo aparte (`nombre.jpg.compressed`), dejar que el proceso de Node termine, y recién ahí mover ese archivo sobre el original con un comando aparte. Si en el futuro la compresión de una imagen nueva falla, es por esto — no es que el archivo esté realmente bloqueado.
- Se corrigió un bug real: todas las páginas declaraban `og:image` apuntando a `logo-jc-negro.png`, pero el archivo real se llamaba `logojc-negro.png` (sin guión) y pesaba 2.4MB a 11811x11811px — el link preview (WhatsApp, Facebook) estaba roto en todo el sitio. Se creó `src/imgs/logo-jc-negro.png` corregido y optimizado (18KB); el archivo viejo `logojc-negro.png` quedó sin usar.
- Cada página tiene ahora su propio `og:title` / `og:description` / `og:image` (antes todas compartían el mismo texto genérico y la misma imagen). Las páginas de modelos usan la foto del propio modelo; las que todavía tienen fotos placeholder usan la de `vid_tem_bot`.
- Se agregaron datos estructurados `schema.org` (`HomeAndConstructionBusiness`) en `index.html` con nombre, dirección, teléfono, redes y coordenadas — ayuda a que Google muestre info del negocio directo en resultados de búsqueda.
- Se comprimieron las imágenes que usa el sitio (redimensionadas a un máximo razonable + recodificadas): bajaron de ~6.3MB a ~2.5MB en total.
- Sin usar todavía: `img-hero.png` (2MB), `jc-barandas-1920x1080-sin-bordes.png` (1.5MB), `img-caracteristicas.jpg`, `taller.jpeg`, `templado-botones-sin-pasamanos/img-principal2.jpeg`, y el `logojc-negro.png` viejo (typo, ya reemplazado). Se habían usado algunas en `proyecto_template.html`, pero esa página se descartó y se borró junto con esas copias. Se pueden borrar cuando quieras, no se tocaron.
- **Carpetas creadas y esperando fotos** para los 6 proyectos reales que va a pasar el cliente: `src/imgs/proyecto_carilo/`, `proyecto_costa_esmeralda/`, `proyecto_haras_santa_maria/`, `proyecto_tigre/`, `proyecto_tenaris/`, `proyecto_talar_del_lago_2/`. Las 6 páginas ya están armadas. Para un proyecto nuevo, usar una de las 6 páginas reales existentes como base (misma estructura, secciones y clases), aplicando el checklist de imágenes de arriba.
- **Nota técnica sobre Tailwind**: cada vez que se agrega una clase NUEVA a un `.html` (sobre todo valores entre corchetes tipo `mt-[110px]`), hay que correr `npx tailwindcss -i ./src/input.css -o ./src/output.css` de nuevo — si no, esa clase no existe en el CSS compilado y no hace nada, aunque el HTML esté bien. Si algo se ve "roto" en una página nueva pero el HTML parece correcto, lo primero a chequear es si faltó ese rebuild.
- `vid_tem_bot_portada_4.jpg` tiene una marca de agua de "Contenido generado por IA" visible (imagen generada por IA, no una foto real) — se dejó como está a pedido tuyo, reemplazar cuando haya una foto real.
- **Criterio de copy para páginas de proyecto**: el texto de "Sobre el proyecto" (y en general, cualquier descripción) tiene que hablar de la baranda/trabajo que hizo JC Barandas, no describir la arquitectura o los materiales de construcción de la casa (piedra, hormigón, madera, etc.) — el cliente vende barandas, no casas. Se corrigió así en `carilo.html` después de un comentario del usuario; aplicar el mismo criterio en las próximas páginas de proyecto.

## Checklist para cada imagen nueva que se agregue

Regla del proyecto: **toda imagen nueva que se suba al sitio pasa por esto antes de darla por terminada** (no solo las que se agregaron en la sesión de SEO — de acá en adelante, siempre):

1. **Alt text descriptivo** — mirar la foto y describir lo que muestra de verdad (no un genérico tipo "Proyecto" o "imagen"). En español, mencionando el producto (baranda/vidrio templado/acero inoxidable/modelo específico) de forma natural.
2. **`width` y `height` en el `<img>`** — con las dimensiones reales del archivo, para que el navegador reserve el espacio y no salte el layout mientras carga.
3. **Comprimir antes de subir al repo** — redimensionar al máximo razonable para cómo se muestra en la página (~1400-1600px de lado largo para fotos grandes/portada, no hace falta más) y recodificar JPEG calidad ~80. Si el archivo pesa varios MB, seguro se puede bajar a una fracción sin que se note.
4. **Si es la foto principal/portada de una página** — actualizar también `og:image` (y `og:image:width`/`og:image:height`) de esa página para que apunte a esa foto, así se ve bien al compartir el link.
5. **Revisar que no sea contenido de IA o de stock** — si es una foto real de un trabajo, que se vea como tal.
6. **Para el banner (header) de una página de proyecto** — usar la foto más horizontal/ancha que haya disponible. Una foto vertical estirada como fondo ancho se pixela (banner simple `bg-cover`, sin corrección — ver Notas). Si todas las fotos del proyecto son verticales, avisar al usuario para que le pida al cliente una sacada en horizontal.

## Pendientes antes de entregar al cliente

### Dominio final: `jcbarandas.com.ar` (decidido)

Dominio **principal**: `https://jcbarandas.com.ar` (sin `www`). El otro dominio del cliente, `jcbarandas.com`, hace **redirect 301** a `jcbarandas.com.ar`. Ambos registrados en DonWeb, hoy sin apuntar a ningún lado.

**Setup en el panel (progreso):**
1. [x] `jcbarandas.com.ar` asociado al hosting Ferozo → "CONFIGURADO CORRECTAMENTE". Sirve `public_html`.
2. [x] Web vieja de `jcherrajes.com` (en `public_html`) respaldada a `.zip`.
3. [ ] Vaciar `public_html` desde el Administrador de archivos (backup ya hecho).
4. [ ] Crear los 3 secrets FTP en GitHub y correr el primer deploy (`.github/workflows/deploy.yml`).
5. [ ] Agregar `jcbarandas.com` al hosting (hoy solo está `.com.ar`).
6. [ ] SSL Let's Encrypt para `jcbarandas.com.ar` + `www` (panel Ferozo → "Certificados SSL"), esperar a que emita.
7. [ ] Confirmar que `https://jcbarandas.com.ar` abre el sitio con candado antes del cutover de código.

### Bloqueantes de código (hacer todos juntos en el cutover, cuando el dominio ya resuelve con SSL)

- [ ] **⚠️ Cambiar el destino de EmailJS del formulario.** Hoy manda al **mail personal del desarrollador** (pruebas): `emailjs.init("yegPUG09JEFFWAJuF")`, `service_socgy8q`, `template_novurzk` en `index.html`. En el dashboard de EmailJS, cambiar el "To email" del template a **`ventas@jcbarandas.com.ar`** (el mail nuevo del cliente) y activar "allowed origins" = `jcbarandas.com.ar`. (El botón "Enviar por WhatsApp" ya apunta al 11 6446-3400; el mail del sitio en header/footer/schema ya es `ventas@jcbarandas.com.ar`.)
- [ ] **Probar el formulario de punta a punta** y confirmar que el mail llega. (Opcional: sumar honeypot anti-bot.)
- [ ] **Quitar `<meta name="robots" content="noindex, nofollow">`** de las 13 páginas (buscar el comentario `<!-- TEMPORAL: ... -->`). **Solo en el cutover** — mientras el sitio viva en la URL temporal, el noindex se queda.
- [ ] **Cambiar `website-jc.tizdigital.com` → `jcbarandas.com.ar`** en `og:url`, `og:image` y el `schema.org` de la home (≈12 archivos). `sed -i 's#website-jc.tizdigital.com#jcbarandas.com.ar#g'`.
- [ ] **`<link rel="canonical">` a URLs absolutas** de `https://jcbarandas.com.ar` en las 13 páginas (hoy en `index.html` es `href="/"`, en el resto relativas).
- [x] **`robots.txt` y `sitemap.xml` creados** (raíz del repo, URLs `https://jcbarandas.com.ar`, 12 URLs: home + 5 modelos + 6 proyectos). Se deployan con el sitio. **Pendiente en el cutover:** dar de alta el dominio en Google Search Console y enviar el sitemap. Si en el cutover se hacen las URLs sin `.html` (regla URL Rewrite), actualizar los `<loc>` del `sitemap.xml` para que coincidan.
- [ ] **`web.config`: descomentar el bloque CUTOVER** (forzar HTTPS + dominio canónico + bloquear internos). Solo después de confirmar que el SSL de `jcbarandas.com.ar` funciona. Si tira error 500 = falta el módulo "URL Rewrite" en IIS → pedirlo a soporte DonWeb.
- [ ] **URLs limpias en páginas internas** (si el módulo "URL Rewrite" está disponible). Los links internos ya apuntan a `/` y `/#section-...` (sin `index.html`), pero las páginas internas todavía muestran `.html` en la URL. Agregar al `web.config`:
  - Regla que sirva `/modelos/xxx` → `/modelos/xxx.html` y `/proyectos/xxx` → `/proyectos/xxx.html` (URLs sin extensión), y actualizar los `href` de los desplegables del nav/footer para que no lleven `.html`.
  - Regla 301 de `/index.html` → `/` (para bookmarks viejos y para no tener `/` y `/index.html` como dos URLs indexables).

### Otros

- [ ] Decidir si reemplazar `vid_tem_bot_portada_4.jpg` (marca de agua de IA) por una foto real. — *por ahora se deja como está.*
- [ ] **`unpkg.com/lucide@latest`** en 13 páginas (íconos): pinear una versión concreta y, si se puede, mover a cdnjs. `@latest` sin fijar puede romper los íconos si sale una versión con cambios. — *dejado así por ahora.*
- [ ] **Avatares de testimonios hotlinkeados de Google** (`lh3.googleusercontent.com`, 5 imágenes en la home): descargar, optimizar y servir localmente. Esas URLs de Google pueden expirar. — *dejado así por ahora.*
- [x] QA: los botones "Ver más imágenes" de la home (sección modelos) apuntaban a `href="#"` (muertos) → ahora van a `vid_tem_bot.html` y `vid_tem_estructura.html`.
- [x] QA: el botón "Ver proyectos" del hero no hacía nada → ahora scrollea a `#section-proyectos` (el carrusel).
- [x] QA: `modelos/galeria.html` borrada — era una prueba a medio hacer (clases de debug, Tailwind Play CDN, sin linkear desde ningún lado), como `sanisidro.html`.
- [x] QA: headers de las 6 páginas de proyecto — título/subtítulo con `text-center max-w-3xl` y `h1` responsive (`text-3xl md:text-4xl`).
- [x] ~~Rehacer `index.html` sección `section-proyectos`~~ — hecho: carrusel nuevo (Swiper, tipo "peek") con los 6 proyectos reales, cada card con su foto de banner y link a su página.
- [x] Los 6 proyectos reales están armados: Cariló, Costa Esmeralda, Haras Santa María, Tigre, Edificio Tenaris, Talar del Lago 2.
- [x] "Proyectos" en el nav (desktop y mobile) es un desplegable con los 6 proyectos, igual que "Modelos".
- [x] "Proyectos" en el footer también es desplegable/lista de los 6 proyectos (columna propia en desktop, acordeón en mobile), igual que "Modelos".
- [x] Borradas las imágenes sin uso (`img-hero.png`, `jc-barandas-1920x1080-sin-bordes.png`, `img-caracteristicas.jpg`, `taller.jpeg`, `logo.png`, `logojc-negro.png` viejo, `templado-botones-sin-pasamanos/img-principal2.jpeg`, `proyecto_talar_del_lago_2/IMG_20230312_220001.jpg`, 2 fotos crudas de Tenaris). `src/imgs` bajó de ~21 MB a ~14 MB.
- [x] Agregado `.gitignore` y `node_modules` sacado del control de versiones (sigue en disco, se reinstala con `npm install`).
