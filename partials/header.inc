<!-- Nav mobile -->
<nav class="fixed top-0 items-center w-full z-20 max-xl:block hidden bg-black/20 backdrop-blur-lg p-2">

  <div class="flex justify-between items-center w-full px-4">

    <div>
      <a href="/index.html"><img src="/src/imgs/logo-jc-blanco.png" class="w-20" alt="Logo-Jc"></a>
    </div>

    <details id="mobile-menu">
      <summary class="list-none"><svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" viewBox="0 0 24 24"
          fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"
          class="lucide lucide-menu-icon lucide-menu">
          <path d="M4 5h16" />
          <path d="M4 12h16" />
          <path d="M4 19h16" />
        </svg></summary>

      <div class="absolute left-0 top-full w-full h-screen bg-gray-900 z-50">

        <!-- Inicio -->
        <a href="/index.html#section-inicio"
          class="flex items-center px-6 py-5 border-b border-gray-700 hover:bg-gray-800 transition-colors">
          Inicio
        </a>

        <!-- Modelos -->
        <details class="group border-b border-gray-700">

          <summary
            class="flex justify-between items-center px-6 py-5 cursor-pointer list-none hover:bg-gray-800 transition-colors">

            <span>Modelos</span>

            <svg class="w-5 h-5 transition-transform group-open:rotate-180" xmlns="http://www.w3.org/2000/svg"
              fill="none" viewBox="0 0 24 24" stroke="currentColor">

              <path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M19 9l-7 7-7-7" />

            </svg>

          </summary>

          <div class="bg-black/20">

            <a href="/modelos/vid_tem_bot.html" class="block px-10 py-4 border-b border-gray-800 hover:bg-gray-800">
              Vidrio templado y botones
            </a>

            <a href="/modelos/vid_tem_minipostes.html" class="block px-10 py-4 border-b border-gray-800 hover:bg-gray-800">
              Vidrio T. y minipostes
            </a>

            <a href="/modelos/vid_tem_estructura.html" class="block px-10 py-4 border-b border-gray-800 hover:bg-gray-800">
              Vidrio T. y estructura inoxidable
            </a>

            <a href="/modelos/barandas_exterior.html" class="block px-10 py-4 border-b border-gray-800 hover:bg-gray-800">
              Barandas de exterior
            </a>

            <a href="/modelos/otros.html" class="block px-10 py-4 hover:bg-gray-800">
              Otros
            </a>

          </div>

        </details>

        <!-- Proyectos -->
        <details class="group border-b border-gray-700">

          <summary
            class="flex justify-between items-center px-6 py-5 cursor-pointer list-none hover:bg-gray-800 transition-colors">

            <span>Proyectos</span>

            <svg class="w-5 h-5 transition-transform group-open:rotate-180" xmlns="http://www.w3.org/2000/svg"
              fill="none" viewBox="0 0 24 24" stroke="currentColor">

              <path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M19 9l-7 7-7-7" />

            </svg>

          </summary>

          <div class="bg-black/20">

            <a href="/proyectos/carilo.html" class="block px-10 py-4 border-b border-gray-800 hover:bg-gray-800">
              Cariló
            </a>

            <a href="/proyectos/costa_esmeralda.html" class="block px-10 py-4 border-b border-gray-800 hover:bg-gray-800">
              Costa Esmeralda
            </a>

            <a href="/proyectos/haras_santa_maria.html" class="block px-10 py-4 border-b border-gray-800 hover:bg-gray-800">
              Haras Santa María
            </a>

            <a href="/proyectos/tigre.html" class="block px-10 py-4 border-b border-gray-800 hover:bg-gray-800">
              Tigre
            </a>

            <a href="/proyectos/tenaris.html" class="block px-10 py-4 border-b border-gray-800 hover:bg-gray-800">
              Edificio Tenaris
            </a>

            <a href="/proyectos/talar_del_lago_2.html" class="block px-10 py-4 hover:bg-gray-800">
              Talar del Lago 2
            </a>

          </div>

        </details>

        <a href="/index.html#section-especificaciones"
          class="flex items-center px-6 py-5 border-b border-gray-700 hover:bg-gray-800 transition-colors">
          Especificaciones
        </a>

        <a href="/index.html#section-contacto"
          class="flex items-center px-6 py-5 border-b border-gray-700 hover:bg-gray-800 transition-colors">
          Contacto
        </a>

        <div class="mt-8 px-6">

          <a href="mailto:ventas@jcherrajes.com"
            class="block rounded-xl bg-black/20 px-5 py-4 text-center hover:bg-black/30 transition-colors">

            ventas@jcherrajes.com

          </a>

        </div>

      </div>
    </details>
  </div>

</nav>

<!-- Nav desktop -->
<nav id="navbar" class="fixed top-0 grid grid-cols-3 items-center px-10 py-3 w-full z-20 max-xl:hidden">

  <div>
    <a href="/index.html#section-inicio">
      <img id="imgheader" src="/src/imgs/logo-jc-blanco.png"
        class="w-36 max-md:w-20 max-md:mb-2 transition-all duration-300" alt="Logo JC barandas">
    </a>
  </div>

  <div class="flex justify-between">
    <a href="/index.html#section-inicio" class="hover:text-blue-600 transition-all cursor-pointer">Inicio</a>

    <div class="relative group">
      <button class="flex items-center gap-2 hover:text-blue-600 transition-all">
        Modelos

        <svg class="w-4 h-4 transition-transform group-hover:rotate-180" xmlns="http://www.w3.org/2000/svg"
          fill="none" viewBox="0 0 24 24" stroke="currentColor">
          <path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M19 9l-7 7-7-7" />
        </svg>
      </button>

      <div class="absolute top-full left-0 mt-2 w-56 rounded-xl bg-white text-black shadow-xl
          opacity-0 invisible group-hover:opacity-100 group-hover:visible
          transition-all duration-300">
        <a href="/modelos/vid_tem_bot.html" class="block px-4 py-3 hover:bg-gray-100">Vidrio templado y botones</a>
        <a href="/modelos/vid_tem_minipostes.html" class="block px-4 py-3 hover:bg-gray-100">Vidrio T. y minipostes</a>
        <a href="/modelos/vid_tem_estructura.html" class="block px-4 py-3 hover:bg-gray-100">Vidrio T. y estructura de acero inoxidable</a>
        <a href="/modelos/barandas_exterior.html" class="block px-4 py-3 hover:bg-gray-100">Barandas de exterior</a>
        <a href="/modelos/otros.html" class="block px-4 py-3 hover:bg-gray-100">Otros</a>
      </div>
    </div>

    <div class="relative group">
      <button class="flex items-center gap-2 hover:text-blue-600 transition-all">
        Proyectos

        <svg class="w-4 h-4 transition-transform group-hover:rotate-180" xmlns="http://www.w3.org/2000/svg"
          fill="none" viewBox="0 0 24 24" stroke="currentColor">
          <path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M19 9l-7 7-7-7" />
        </svg>
      </button>

      <div class="absolute top-full left-0 mt-2 w-56 rounded-xl bg-white text-black shadow-xl
          opacity-0 invisible group-hover:opacity-100 group-hover:visible
          transition-all duration-300">
        <a href="/proyectos/carilo.html" class="block px-4 py-3 hover:bg-gray-100">Cariló</a>
        <a href="/proyectos/costa_esmeralda.html" class="block px-4 py-3 hover:bg-gray-100">Costa Esmeralda</a>
        <a href="/proyectos/haras_santa_maria.html" class="block px-4 py-3 hover:bg-gray-100">Haras Santa María</a>
        <a href="/proyectos/tigre.html" class="block px-4 py-3 hover:bg-gray-100">Tigre</a>
        <a href="/proyectos/tenaris.html" class="block px-4 py-3 hover:bg-gray-100">Edificio Tenaris</a>
        <a href="/proyectos/talar_del_lago_2.html" class="block px-4 py-3 hover:bg-gray-100">Talar del Lago 2</a>
      </div>
    </div>
    <a href="/index.html#section-especificaciones" class="hover:text-blue-600 transition-all cursor-pointer">Especificaciones</a>
    <a href="/index.html#section-contacto" class="hover:text-blue-600 transition-all cursor-pointer font-semibold">Contacto</a>
  </div>

  <div class="flex justify-end  max-md:hidden">
    <a href="/index.html#section-contacto">
      ventas@jcherrajes.com
    </a>
  </div>

</nav>
