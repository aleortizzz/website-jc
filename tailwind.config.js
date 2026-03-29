/** @type {import('tailwindcss').Config} */
module.exports = {
  content: [
  "./*.html",
  "./**/*.html",   // 👈 CLAVE
  "./src/**/*.{html,js}",
  "./templates/**/*.html",
],
  theme: {
    extend: {
      fontFamily: {
        sans: ['Figtree', 'sans-serif'],
      },
    },
  },
  plugins: [
    require('tailwindcss-animated'),
    require('daisyui'),
  ],

  daisyui: {
    themes: ["light"],
  },
}