#ifndef _BANDWIDTH_H
#define _BANDWIDTH_H

enum nft_bandwidth_attributes {
	NFTA_BANDWIDTH_UNSPEC,
	NFTA_BANDWIDTH_ID,
	NFTA_BANDWIDTH_CMP,
	NFTA_BANDWIDTH_TYPE,
	NFTA_BANDWIDTH_CHECKTYPE,
	NFTA_BANDWIDTH_BWCUTOFF,
	NFTA_BANDWIDTH_CURRENTBW,
	NFTA_BANDWIDTH_SUBNET,
	NFTA_BANDWIDTH_SUBNET6,
	NFTA_BANDWIDTH_RSTINTVL,
	NFTA_BANDWIDTH_RSTINTVLCONST,
	NFTA_BANDWIDTH_RSTTIME,
	NFTA_BANDWIDTH_NUMINTVLSTOSAVE,
	NFTA_BANDWIDTH_NEXTRESET,
	NFTA_BANDWIDTH_PREVRESET,
	NFTA_BANDWIDTH_LASTBACKUPTIME,
	NFTA_BANDWIDTH_MINUTESWEST,
	NFTA_BANDWIDTH_PAD,
	__NFTA_BANDWIDTH_MAX,
};

#define NFTA_BANDWIDTH_MAX (__NFTA_BANDWIDTH_MAX - 1)

#endif /* _BANDWIDTH_H */