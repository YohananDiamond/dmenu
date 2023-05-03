# Maintainer:

pkgname=dmenu-yd
_pkgname=dmenu
pkgver=4.9.r593.dddeb9b
pkgrel=1
epoch=1
pkgdesc=
arch=('i686' 'x86_64')
license=('MIT')
options=()
depends=()
makedepends=()
optdepends=()
source=()
sha1sums=()

provides=("${_pkgname}")
conflicts=("${_pkgname}")

pkgver() {
	printf "%s.r%s.%s" "$(awk '/^VERSION =/ {print $3}' ../config.mk)" \
		"$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"
}

prepare() {
  :
}

build() {
  cd ..
	make
}

package() {
  cd ..
  make PREFIX=/usr DESTDIR="${pkgdir}" install
  install -Dm644 LICENSE "${pkgdir}/usr/share/licenses/${pkgname}/LICENSE"
  install -Dm644 README "${pkgdir}/usr/share/doc/${pkgname}/README"
}
