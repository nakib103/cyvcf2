#include <htslib/vcf.h>
#include <htslib/khash.h>

int as_gts(int *gts, int num_samples, int ploidy, int strict_gt, int HOM_ALT, int UNKNOWN);
int32_t* bcf_hdr_seqlen(const bcf_hdr_t *hdr, int32_t *nseq);
