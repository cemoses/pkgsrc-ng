# $NetBSD: Makefile,v 1.20 2014/01/25 10:30:16 wiz Exp $

DISTNAME=	boto-2.6.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
PKGREVISON=	1
CATEGORIES=	net
MASTER_SITES=	http://cloud.github.com/downloads/boto/boto/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://docs.pythonboto.org/
COMMENT=	Python interface to Amazon web services
LICENSE=	mit

DEPENDS+=	${PYPKGPREFIX}-filechunkio-[0-9]*:../../devel/py-filechunkio

REPLACE_PYTHON+=	*.py
REPLACE_PYTHON+=	boto/*/*.py
REPLACE_PYTHON+=	bin/*

PYTHON_VERSIONS_INCOMPATIBLE=	33 # py-filechunkio

.include "../../lang/python/application.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
