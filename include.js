(function () {
  function loadPartial(url, placeholderId) {
    return fetch(url)
      .then((res) => res.text())
      .then((html) => {
        const el = document.getElementById(placeholderId);
        if (el) el.innerHTML = html;
      });
  }

  function initHeader() {
    const mobileMenu = document.getElementById("mobile-menu");
    if (mobileMenu) {
      mobileMenu.querySelectorAll("a").forEach((link) => {
        link.addEventListener("click", () => {
          setTimeout(() => mobileMenu.removeAttribute("open"), 50);
        });
      });
    }

    const navbar = document.getElementById("navbar");
    const imgheader = document.getElementById("imgheader");
    if (navbar && imgheader) {
      window.addEventListener("scroll", () => {
        const scrolled = window.scrollY > 50;
        navbar.classList.toggle("bg-black/20", scrolled);
        navbar.classList.toggle("backdrop-blur-lg", scrolled);
        imgheader.classList.toggle("w-20", scrolled);
        imgheader.classList.toggle("w-36", !scrolled);
      });
    }
  }

  function initFooter() {
    const yearEl = document.getElementById("current-year");
    if (yearEl) yearEl.textContent = new Date().getFullYear();
  }

  document.addEventListener("DOMContentLoaded", () => {
    Promise.all([
      loadPartial("/partials/header.inc", "header-placeholder"),
      loadPartial("/partials/footer.inc", "footer-placeholder"),
    ]).then(() => {
      initHeader();
      initFooter();
    });
  });
})();
