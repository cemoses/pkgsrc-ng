# $NetBSD: Makefile,v 1.9 2013/05/31 12:39:35 wiz Exp $

DISTNAME=	Compress-LZMA-Simple-0.2
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	5
CATEGORIES=	archivers
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Compress/}

MAINTAINER=	obache@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Compress-LZMA-Simple/
COMMENT=	Perl interface of lzmalib
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST=	auto/Compress/LZMA/Simple/.packlist

.include "../../archivers/lzmalib/buildlink3.mk"
.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
