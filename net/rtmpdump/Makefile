# $OpenBSD: Makefile,v 1.3 2009/04/29 01:39:15 sthen Exp $

COMMENT =		dump RTMP media streams

DISTNAME =		rtmpdump-v1.5
PKGNAME =		${DISTNAME:S/-v/-/}p0

CATEGORIES =		net

HOMEPAGE =		http://sourceforge.net/projects/rtmpdump/

# GPLv2+
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB =		c m stdc++ crypto ssl

MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=rtmpdump/}
WRKDIST =		${WRKDIR}/rtmpdump

MAKE_FLAGS +=		CXX="${CXX}" CXXFLAGS="${CXXFLAGS}"

NO_REGRESS =		Yes

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/rtmpdump ${PREFIX}/bin

.include <bsd.port.mk>