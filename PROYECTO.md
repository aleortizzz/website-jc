# JC Barandas — Sitio Web

Sitio web de presentación/portfolio para **JC Barandas**, una empresa dedicada a la fabricación e instalación de **barandas de acero inoxidable y vidrio templado**. Desarrollado por *TizDigital*.

## Objetivo del sitio

Landing page comercial pensada para captar clientes: muestra el trabajo de la empresa, genera confianza (testimonios, características, proyectos realizados) y termina en un formulario de contacto que deriva a WhatsApp o email.

## Estructura del sitio

- **[index.html](index.html)** — Página principal, con las siguientes secciones:
  - `section-inicio` — Hero principal ("Barandas de Diseño")
  - `sobre-nosotros` — Presentación de la empresa + opiniones/testimonios de clientes
  - `section-proyectos` — Destacado del Proyecto San Isidro
  - `section-especificaciones` — "Nos caracteriza" (diferenciales de la empresa)
  - `modelos` — Vista previa de los modelos/estilos de baranda ofrecidos
  - `section-contacto` — Formulario de contacto (nombre, interés, contacto, zona, mensaje) con botones de envío por **WhatsApp** y **email**
  - Footer con redes sociales (Instagram, WhatsApp, Facebook)

- **[modelos/](modelos/)** — Páginas de detalle de modelos de barandas (son las que aparecen en el desplegable "Modelos" del nav):
  - [galeria.html](modelos/galeria.html) — Galería premium de fotos
  - [vid_tem_bot.html](modelos/vid_tem_bot.html) — Vidrio templado y botones
  - [vid_tem_minipostes.html](modelos/vid_tem_minipostes.html) — Vidrio templado y minipostes
  - [vid_tem_estructura.html](modelos/vid_tem_estructura.html) — Vidrio templado y estructura de acero inoxidable
  - [barandas_exterior.html](modelos/barandas_exterior.html) — Barandas de exterior
  - [otros.html](modelos/otros.html) — Otros trabajos a medida

- **[proyectos/](proyectos/)** — Casos de estudio de proyectos realizados:
  - [sanisidro.html](proyectos/sanisidro.html) — "Proyecto San Isidro". **Importante: NO es un proyecto real** — lo armó el usuario como plantilla/referencia de cómo tiene que verse la página de un proyecto (por eso tiene fotos de stock de Unsplash/Freepik). Es la que se usa como base para las páginas de proyectos reales. Estructura **activa** en el HTML: hero, sobre el proyecto, materiales/detalles técnicos, galería de fotos, CTA. (Tiene comentadas — inactivas — secciones de "Objetivos del cliente / Solución implementada" y "Resultado final"; no se usaron para `carilo.html` porque no están activas en la plantilla, solo se replicó lo que sanisidro realmente muestra.)
  - (Hice una `proyecto_template.html` alternativa para proponer un formato distinto — no gustó, se descartó. Se sigue con `sanisidro.html` como base.)
  - [carilo.html](proyectos/carilo.html) — Primer proyecto real armado con este patrón: barandas de vidrio templado sin marco en balcones/terrazas de una vivienda en Cariló. Fotos en `src/imgs/proyecto_carilo/` (`carilo_banner.jpg` + `carilo_1.jpg` a `carilo_5.jpg`). De paso se corrigió, para esta página, el bug que tenía `sanisidro.html` en Materiales (tarjeta "Acero inoxidable" repetida dos veces) — acá son 3 categorías distintas (Vidrio templado / Acero inoxidable / Herrajes y fijaciones).
  - [costa_esmeralda.html](proyectos/costa_esmeralda.html) — Barandas de vidrio templado + estructura de acero inoxidable en balcones/terrazas de una vivienda en Costa Esmeralda. Fotos en `src/imgs/proyecto_costa_esmeralda/` (`costa_esmeralda_banner.jpg` + `costa_esmeralda_1.jpg` a `costa_esmeralda_6.jpg`).
  - [haras_santa_maria.html](proyectos/haras_santa_maria.html) — Baranda de acero inoxidable y vidrio en entrepiso/escalera de una vivienda en Haras Santa María. Fotos en `src/imgs/proyecto_haras_santa_maria/` (solo 4 fotos disponibles: banner + 1 + 2 de galería).
  - [tigre.html](proyectos/tigre.html) — Barandas de vidrio y acero inoxidable en balcones de un edificio en Tigre. Fotos en `src/imgs/proyecto_tigre/`.
  - [tenaris.html](proyectos/tenaris.html) — Baranda de acero inoxidable y vidrio en la escalera principal del edificio Tenaris. Fotos en `src/imgs/proyecto_tenaris/`.
  - [talar_del_lago_2.html](proyectos/talar_del_lago_2.html) — Baranda de acero inoxidable y vidrio en escalera/entrepiso de una vivienda en Talar del Lago 2. Fotos en `src/imgs/proyecto_talar_del_lago_2/`. Nota: quedó `IMG_20230312_220001.jpg` sin usar/renombrar en esa carpeta (había una foto de más).
  - **Las 6 páginas de proyectos reales están completas** con el mismo patrón: banner + imagen "Sobre el proyecto" + materiales (3 categorías) + galería de 3 a 6 fotos + CTA, todas con alt text real, `width`/`height`, compresión y `og:image` propio. El copy de todas sigue el criterio de foco en la baranda, no en la arquitectura de la casa.
  - La imagen de "Sobre el proyecto" tiene `h-[480px] object-cover` (además de `width`/`height` reales para el navegador) para que se vea del mismo tamaño en todas las páginas — antes cada una tenía su tamaño natural y algunas (Tenaris) quedaban gigantes y pedían scroll para verse completas. Se corrigió también en `sanisidro.html` (la plantilla base) para que las próximas páginas ya salgan bien.
  - **Banner (header hero) — probado y revertido.** El problema real: fotos angostas/verticales (Haras Santa María es 897×1920, sin ninguna horizontal disponible) se pixelan al estirarse como fondo ancho con `background-size: cover`. Se probaron dos soluciones: achicar la altura (`h-[28vh]` — no sirve, `cover` igual agranda la imagen lo mismo horizontalmente sin importar la altura del contenedor) y un diseño de 3 capas con fondo `blur-2xl` + foto sin estirar centrada encima (sí soluciona el pixelado, probado y confirmado que se ve bien). A pedido del usuario **se volvió al banner original** (`h-[40vh] bg-cover bg-center`, simple, sin las capas de blur) en las 7 páginas — va a pedirle al cliente fotos sacadas en horizontal para Haras Santa María y Costa Esmeralda en vez de complicar el CSS. Si en el futuro se quiere retomar el diseño con blur, la receta está en el historial de esta conversación.

- **[src/](src/)** — Assets del proyecto:
  - `input.css` / `output.css` — Estilos generados con Tailwind CSS
  - `imgs/` — Imágenes del sitio (logo, favicon, fotos de proyectos, hero, taller, etc.)

- **[partials/](partials/)** — Header y footer compartidos entre páginas:
  - [header.inc](partials/header.inc) — Nav mobile + nav desktop (una sola vez, en vez de repetido en cada página)
  - [footer.inc](partials/footer.inc) — Footer + botón flotante de WhatsApp
  - Extensión `.inc` (no `.html`) a propósito: son fragmentos, no páginas completas. Editores como el "Live Preview" de VS Code le inyectan un script de auto-recarga a cualquier `.html` que sirven, y como estos archivos no tienen `<html>`/`<body>` propios, esa inyección los corta a la mitad. Con `.inc` no se meten.
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
- El formulario de contacto envía los mails vía **EmailJS** (service/template configurados en el `<script>` de [index.html](index.html)); no hay backend propio.
- El header/footer compartido (`partials/`) se carga con `fetch()`, que **no funciona abriendo el HTML directo desde el explorador de archivos** (`file://...`). Para probar en local hace falta un servidor HTTP simple (ej. extensión "Live Server" de VS Code, o `npx serve`). En Hostinger va a andar normal porque ahí sí se sirve por HTTP.
- Los links del nav/footer a secciones de la home (Inicio, Proyectos, etc.) ahora apuntan siempre a `/index.html#section-...`, incluso estando ya en la home — antes hacían scroll suave sin recargar. Es la contra de tener un solo header compartido; si se nota molesto se puede revisar más adelante.
- `modelos/galeria.html` no tiene header/footer (parece pensada como página standalone) — se dejó como estaba, sin el include.
- El nav de escritorio (con los 5 modelos + Proyectos + Especificaciones + Contacto + mail) necesita bastante ancho para no amontonarse. Por eso el menú hamburguesa se usa hasta los 1280px de ancho de pantalla, y recién de ahí para arriba se ve el menú horizontal completo.
- `vid_tem_minipostes.html` ya tiene sus fotos reales (`src/imgs/vid_tem_minpostes/`, nota: la carpeta quedó con ese typo — falta la "i" de "minipostes" — no lo corregí para no romper los links, se puede renombrar más adelante si se quiere prolijo).
- `vid_tem_estructura.html` ya tiene sus fotos reales (`src/imgs/vid_tem_estructura/`, esta carpeta sin typo).
- `barandas_exterior.html` ya tiene sus fotos reales (`src/imgs/baranda_exterior/` — ojo, la carpeta está en singular "baranda", la página en plural "barandas", otro nombre que no coincide exacto pero funciona).
- `otros.html` ya tiene sus fotos reales (`src/imgs/otros/`). Con esto, **las 5 páginas de modelos ya tienen todas fotos reales** — no queda ninguna con el placeholder de `vid_tem_bot`.
- **Nota técnica sobre comprimir imágenes nuevas**: la librería que uso (`sharp`) a veces deja el archivo "tomado" un rato después de leerlo, y si se intenta sobreescribir el mismo archivo en el mismo proceso de Node, falla. La solución que funciona: comprimir y guardar en un archivo aparte (`nombre.jpg.compressed`), dejar que el proceso de Node termine, y recién ahí mover ese archivo sobre el original con un comando aparte. Si en el futuro la compresión de una imagen nueva falla, es por esto — no es que el archivo esté realmente bloqueado.
- `proyectos/sanisidro.html` usa fotos de stock (Unsplash/Freepik) a propósito — es la plantilla, no un proyecto real (ver nota en Estructura del sitio). No hace falta cambiarle las fotos.
- Se corrigió un bug real: todas las páginas declaraban `og:image` apuntando a `logo-jc-negro.png`, pero el archivo real se llamaba `logojc-negro.png` (sin guión) y pesaba 2.4MB a 11811x11811px — el link preview (WhatsApp, Facebook) estaba roto en todo el sitio. Se creó `src/imgs/logo-jc-negro.png` corregido y optimizado (18KB); el archivo viejo `logojc-negro.png` quedó sin usar.
- Cada página tiene ahora su propio `og:title` / `og:description` / `og:image` (antes todas compartían el mismo texto genérico y la misma imagen). Las páginas de modelos usan la foto del propio modelo; las que todavía tienen fotos placeholder usan la de `vid_tem_bot`.
- Se agregaron datos estructurados `schema.org` (`HomeAndConstructionBusiness`) en `index.html` con nombre, dirección, teléfono, redes y coordenadas — ayuda a que Google muestre info del negocio directo en resultados de búsqueda.
- Se comprimieron las imágenes que usa el sitio (redimensionadas a un máximo razonable + recodificadas): bajaron de ~6.3MB a ~2.5MB en total.
- Sin usar todavía: `img-hero.png` (2MB), `jc-barandas-1920x1080-sin-bordes.png` (1.5MB), `img-caracteristicas.jpg`, `taller.jpeg`, `templado-botones-sin-pasamanos/img-principal2.jpeg`, y el `logojc-negro.png` viejo (typo, ya reemplazado). Se habían usado algunas en `proyecto_template.html`, pero esa página se descartó y se borró junto con esas copias. Se pueden borrar cuando quieras, no se tocaron.
- **Carpetas creadas y esperando fotos** para los 6 proyectos reales que va a pasar el cliente: `src/imgs/proyecto_carilo/`, `proyecto_costa_esmeralda/`, `proyecto_haras_santa_maria/`, `proyecto_tigre/`, `proyecto_tenaris/`, `proyecto_talar_del_lago_2/`. Cuando el usuario avise que subió fotos a alguna, armar la página del proyecto en `proyectos/` usando `sanisidro.html` como base (misma estructura, secciones y clases), aplicando el checklist de imágenes de arriba.
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

- [ ] **Quitar el `<meta name="robots" content="noindex, nofollow">`** agregado en todas las páginas (`index.html`, `modelos/*.html`, `proyectos/*.html`). Se agregó porque el sitio está publicado en Hostinger bajo una URL temporal (no la del cliente) y no queremos que Google la indexe antes de la entrega final. Buscar el comentario `<!-- TEMPORAL: ... -->` en cada archivo.
- [ ] Verificar que el `<link rel="canonical">` (agregado como ruta relativa, ej. `/modelos/galeria.html`) siga siendo correcto una vez migrado al dominio final del cliente — al ser relativo no debería requerir cambios, pero conviene confirmarlo.
- [ ] Evaluar agregar `robots.txt` y `sitemap.xml` recién en el dominio final del cliente (no tiene sentido crearlos para la URL temporal de Hostinger).
- [ ] Decidir si reemplazar `vid_tem_bot_portada_4.jpg` (tiene marca de agua de IA) por una foto real.
- [ ] Decidir si borrar las imágenes sin uso (`img-hero.png`, `jc-barandas-1920x1080-sin-bordes.png`, `img-caracteristicas.jpg`, `taller.jpeg`, `templado-botones-sin-pasamanos/img-principal2.jpeg`, `logojc-negro.png` viejo).
- [ ] **Revisar `index.html` sección `section-proyectos`**: destaca "Proyecto San Isidro" con texto descriptivo como si fuera un caso real, pero `sanisidro.html` confirmado que es una plantilla, no un proyecto real. Cuando haya proyectos reales cargados, probablemente haya que cambiar esa sección de la home para que muestre uno de los proyectos reales en vez de San Isidro.
- [x] Los 6 proyectos reales están armados: Cariló, Costa Esmeralda, Haras Santa María, Tigre, Edificio Tenaris, Talar del Lago 2.
- [x] "Proyectos" en el nav (desktop y mobile) ya es un desplegable con los 6 proyectos, igual que "Modelos".
- [ ] Sobra una foto sin usar en `src/imgs/proyecto_talar_del_lago_2/IMG_20230312_220001.jpg` — decidir si se usa (habría que agregarla a la página) o se borra.
- [ ] El link "Proyectos" del footer (columna Navegación) sigue apuntando a `#section-proyectos` de la home, no al desplegable — decidir si conviene armarlo también ahí.
