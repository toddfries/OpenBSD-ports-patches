# $OpenBSD: Makefile,v 1.1.1.1 2010/07/06 16:43:29 ajacoutot Exp $

COMMENT =	html help viewer

DISTNAME =	chmsee-1.1.0

CATEGORIES =	textproc x11

HOMEPAGE =	http://code.google.com/p/chmsee/

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MASTER_SITES =	http://chmsee.googlecode.com/files/

WANTLIB += X11 Xau Xcomposite Xcursor Xdamage Xdmcp Xext Xfixes
WANTLIB += Xi Xinerama Xrandr Xrender atk-1.0 c cairo expat fontconfig
WANTLIB += freetype gio-2.0 glib-2.0 glitz gmodule-2.0 gobject-2.0
WANTLIB += gthread-2.0 m pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pixman-1 png pthread-stubs stdc++ xcb xcb-render
WANTLIB += xcb-render-util xml2 z

MODULES =	devel/cmake \
		devel/gettext

BUILD_DEPENDS =	::devel/xulrunner/1.9,-devel

RUN_DEPENDS =	::devel/desktop-file-utils \
		::devel/xulrunner/1.9

LIB_DEPENDS =	nspr4.>=21,plc4,plds4::devel/nspr \
		chm::devel/chmlib \
		gdk-x11-2.0.>=1403,gdk_pixbuf-2.0,gtk-x11-2.0::x11/gtk+2 \
		gcrypt.>=15::security/libgcrypt

USE_X11 =	Yes

NO_REGRESS =	Yes

.include <bsd.port.mk>