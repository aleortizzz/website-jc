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

- **[modelos/](modelos/)** — Páginas de detalle de modelos de barandas:
  - [galeria.html](modelos/galeria.html) — Galería premium de fotos
  - [vid_tem_bot.html](modelos/vid_tem_bot.html) — Modelo de vidrio templado con botones (sin pasamanos)

- **[proyectos/](proyectos/)** — Casos de estudio de proyectos realizados:
  - [sanisidro.html](proyectos/sanisidro.html) — "Proyecto San Isidro": incluye sobre el proyecto, objetivos del cliente, solución implementada, materiales/detalles técnicos, resultado final y galería de fotos

- **[src/](src/)** — Assets del proyecto:
  - `input.css` / `output.css` — Estilos generados con Tailwind CSS
  - `imgs/` — Imágenes del sitio (logo, favicon, fotos de proyectos, hero, taller, etc.)

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

## Pendientes antes de entregar al cliente

- [ ] **Quitar el `<meta name="robots" content="noindex, nofollow">`** agregado en `index.html`, `modelos/galeria.html`, `modelos/vid_tem_bot.html` y `proyectos/sanisidro.html`. Se agregó porque el sitio está publicado en Hostinger bajo una URL temporal (no la del cliente) y no queremos que Google la indexe antes de la entrega final. Buscar el comentario `<!-- TEMPORAL: ... -->` en cada archivo.
- [ ] Verificar que el `<link rel="canonical">` (agregado como ruta relativa, ej. `/modelos/galeria.html`) siga siendo correcto una vez migrado al dominio final del cliente — al ser relativo no debería requerir cambios, pero conviene confirmarlo.
- [ ] Revisar `modelos/vid_tem_bot.html`: el `<title>` y la meta `description` dicen "Proyecto San Isidro..." (parecen copiados de `proyectos/sanisidro.html` y no describen este modelo).
- [ ] Evaluar agregar `robots.txt` y `sitemap.xml` recién en el dominio final del cliente (no tiene sentido crearlos para la URL temporal de Hostinger).
- [ ] Evaluar agregar datos estructurados `schema.org` (`LocalBusiness`) para mejorar el SEO local, también en el dominio final.
