# $OpenBSD: Makefile.inc,v 1.4 2014/02/07 11:48:05 ajacoutot Exp $

COMMENT=	$L language data for Tesseract

V=		3.02
DISTNAME=	tesseract-ocr-${V}.${L}
PKGNAME =	tesseract-${L}-${V}
WRKDIST=	${WRKDIR}/tesseract-ocr
EPOCH ?=	0
REVISION ?=	0

CATEGORIES=	graphics textproc

HOMEPAGE=	https://tesseract-ocr.googlecode.com/

# Apache License 2.0
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES=	${HOMEPAGE}/files/

NO_BUILD = Yes
PKG_ARCH=	*
SUBST_VARS +=	L
PKGDIR = 	${.CURDIR}/../pkg
DESCR =		${PKGDIR}/DESCR-$L

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/tessdata/
	cp ${WRKSRC}/tessdata/${L}.traineddata ${PREFIX}/share/tessdata/
	chown -R ${SHAREOWN}:${SHAREGRP} ${PREFIX}/share
