#ifndef INC_bigselRecord_H
#define INC_bigselRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"

#ifndef selSELM_NUM_CHOICES
typedef enum {
    selSELM_Specified               /* Specified */,
    selSELM_High_Signal             /* High Signal */,
    selSELM_Low_Signal              /* Low Signal */,
    selSELM_Median_Signal           /* Median Signal */
} selSELM;
#define selSELM_NUM_CHOICES 4
#endif

typedef struct bigselRecord {
    char                    name[61];   /* Record Name */
    char                    desc[41];   /* Descriptor */
    char                    asg[29];    /* Access Security Group */
    epicsEnum16             scan;       /* Scan Mechanism */
    epicsEnum16             pini;       /* Process at iocInit */
    epicsInt16              phas;       /* Scan Phase */
    char                    evnt[40];   /* Event Number */
    epicsInt16              tse;        /* Time Stamp Event */
    DBLINK                  tsel;       /* Time Stamp Link */
    epicsEnum16             dtyp;       /* Device Type */
    epicsInt16              disv;       /* Disable Value */
    epicsInt16              disa;       /* Disable */
    DBLINK                  sdis;       /* Scanning Disable */
    epicsMutexId            mlok;       /* Monitor lock */
    ELLLIST                 mlis;       /* Monitor List */
    ELLLIST                 bklnk;      /* Backwards link tracking */
    epicsUInt8              disp;       /* Disable putField */
    epicsUInt8              proc;       /* Force Processing */
    epicsEnum16             stat;       /* Alarm Status */
    epicsEnum16             sevr;       /* Alarm Severity */
    epicsEnum16             nsta;       /* New Alarm Status */
    epicsEnum16             nsev;       /* New Alarm Severity */
    epicsEnum16             acks;       /* Alarm Ack Severity */
    epicsEnum16             ackt;       /* Alarm Ack Transient */
    epicsEnum16             diss;       /* Disable Alarm Sevrty */
    epicsUInt8              lcnt;       /* Lock Count */
    epicsUInt8              pact;       /* Record active */
    epicsUInt8              putf;       /* dbPutField process */
    epicsUInt8              rpro;       /* Reprocess  */
    struct asgMember        *asp;       /* Access Security Pvt */
    struct processNotify    *ppn;       /* addr of PUTNOTIFY */
    struct processNotifyRecord *ppnr;   /* pputNotifyRecord */
    struct scan_element     *spvt;      /* Scan Private */
    struct typed_rset       *rset;      /* Address of RSET */
    struct dset             *dset;      /* DSET address */
    void                    *dpvt;      /* Device Private */
    struct dbRecordType     *rdes;      /* Address of dbRecordType */
    struct lockRecord       *lset;      /* Lock Set */
    epicsEnum16             prio;       /* Scheduling Priority */
    epicsUInt8              tpro;       /* Trace Processing */
    char                    bkpt;       /* Break Point */
    epicsUInt8              udf;        /* Undefined */
    epicsEnum16             udfs;       /* Undefined Alarm Sevrty */
    epicsTimeStamp          time;       /* Time */
    DBLINK                  flnk;       /* Forward Process Link */
    epicsFloat64            val;        /* Result */
    epicsEnum16             selm;       /* Select Mechanism */
    epicsUInt16             seln;       /* Index value */
    epicsInt16              prec;       /* Display Precision */
    DBLINK                  nvl;        /* Index Value Location */
    DBLINK                  inpa;       /* Input A */
    DBLINK                  inpb;       /* Input B */
    DBLINK                  inpc;       /* Input C */
    DBLINK                  inpd;       /* Input D */
    DBLINK                  inpe;       /* Input E */
    DBLINK                  inpf;       /* Input F */
    DBLINK                  inpg;       /* Input G */
    DBLINK                  inph;       /* Input H */
    DBLINK                  inpi;       /* Input I */
    DBLINK                  inpj;       /* Input J */
    DBLINK                  inpk;       /* Input K */
    DBLINK                  inpl;       /* Input L */
    DBLINK                  inpm;       /* Input M */
    DBLINK                  inpn;       /* Input N */
    DBLINK                  inpo;       /* Input O */
    DBLINK                  inpp;       /* Input P */
    char                    egu[16];    /* Units Name */
    epicsFloat64            hopr;       /* High Operating Rng */
    epicsFloat64            lopr;       /* Low Operating Range */
    epicsFloat64            hihi;       /* Hihi Alarm Limit */
    epicsFloat64            lolo;       /* Lolo Alarm Limit */
    epicsFloat64            high;       /* High Alarm Limit */
    epicsFloat64            low;        /* Low Alarm Limit */
    epicsEnum16             hhsv;       /* Hihi Severity */
    epicsEnum16             llsv;       /* Lolo Severity */
    epicsEnum16             hsv;        /* High Severity */
    epicsEnum16             lsv;        /* Low Severity */
    epicsFloat64            hyst;       /* Alarm Deadband */
    epicsFloat64            adel;       /* Archive Deadband */
    epicsFloat64            mdel;       /* Monitor Deadband */
    epicsFloat64            a;          /* Value of Input A */
    epicsFloat64            b;          /* Value of Input B */
    epicsFloat64            c;          /* Value of Input C */
    epicsFloat64            d;          /* Value of Input D */
    epicsFloat64            e;          /* Value of Input E */
    epicsFloat64            f;          /* Value of Input F */
    epicsFloat64            g;          /* Value of Input G */
    epicsFloat64            h;          /* Value of Input H */
    epicsFloat64            i;          /* Value of Input I */
    epicsFloat64            j;          /* Value of Input J */
    epicsFloat64            k;          /* Value of Input K */
    epicsFloat64            l;          /* Value of Input L */
    epicsFloat64            m;          /* Value of Input M */
    epicsFloat64            n;          /* Value of Input N */
    epicsFloat64            o;          /* Value of Input O */
    epicsFloat64            p;          /* Value of Input P */
    epicsFloat64            la;         /* Prev Value of A */
    epicsFloat64            lb;         /* Prev Value of B */
    epicsFloat64            lc;         /* Prev Value of C */
    epicsFloat64            ld;         /* Prev Value of D */
    epicsFloat64            le;         /* Prev Value of E */
    epicsFloat64            lf;         /* Prev Value of F */
    epicsFloat64            lg;         /* Prev Value of G */
    epicsFloat64            lh;         /* Prev Value of H */
    epicsFloat64            li;         /* Prev Value of I */
    epicsFloat64            lj;         /* Prev Value of J */
    epicsFloat64            lk;         /* Prev Value of K */
    epicsFloat64            ll;         /* Prev Value of L */
    epicsFloat64            lm;         /* Prev Value of M */
    epicsFloat64            ln;         /* Prev Value of N */
    epicsFloat64            lo;         /* Prev Value of O */
    epicsFloat64            lp;         /* Prev Value of P */
    epicsFloat64            lalm;       /* Last Value Alarmed */
    epicsFloat64            alst;       /* Last Value Archived */
    epicsFloat64            mlst;       /* Last Val Monitored */
    epicsUInt16             nlst;       /* Last Index Monitored */
} bigselRecord;

typedef enum {
    bigselRecordNAME = 0,
    bigselRecordDESC = 1,
    bigselRecordASG = 2,
    bigselRecordSCAN = 3,
    bigselRecordPINI = 4,
    bigselRecordPHAS = 5,
    bigselRecordEVNT = 6,
    bigselRecordTSE = 7,
    bigselRecordTSEL = 8,
    bigselRecordDTYP = 9,
    bigselRecordDISV = 10,
    bigselRecordDISA = 11,
    bigselRecordSDIS = 12,
    bigselRecordMLOK = 13,
    bigselRecordMLIS = 14,
    bigselRecordBKLNK = 15,
    bigselRecordDISP = 16,
    bigselRecordPROC = 17,
    bigselRecordSTAT = 18,
    bigselRecordSEVR = 19,
    bigselRecordNSTA = 20,
    bigselRecordNSEV = 21,
    bigselRecordACKS = 22,
    bigselRecordACKT = 23,
    bigselRecordDISS = 24,
    bigselRecordLCNT = 25,
    bigselRecordPACT = 26,
    bigselRecordPUTF = 27,
    bigselRecordRPRO = 28,
    bigselRecordASP = 29,
    bigselRecordPPN = 30,
    bigselRecordPPNR = 31,
    bigselRecordSPVT = 32,
    bigselRecordRSET = 33,
    bigselRecordDSET = 34,
    bigselRecordDPVT = 35,
    bigselRecordRDES = 36,
    bigselRecordLSET = 37,
    bigselRecordPRIO = 38,
    bigselRecordTPRO = 39,
    bigselRecordBKPT = 40,
    bigselRecordUDF = 41,
    bigselRecordUDFS = 42,
    bigselRecordTIME = 43,
    bigselRecordFLNK = 44,
    bigselRecordVAL = 45,
    bigselRecordSELM = 46,
    bigselRecordSELN = 47,
    bigselRecordPREC = 48,
    bigselRecordNVL = 49,
    bigselRecordINPA = 50,
    bigselRecordINPB = 51,
    bigselRecordINPC = 52,
    bigselRecordINPD = 53,
    bigselRecordINPE = 54,
    bigselRecordINPF = 55,
    bigselRecordINPG = 56,
    bigselRecordINPH = 57,
    bigselRecordINPI = 58,
    bigselRecordINPJ = 59,
    bigselRecordINPK = 60,
    bigselRecordINPL = 61,
    bigselRecordINPN = 62,
    bigselRecordINPM = 63,
    bigselRecordINPO = 64,
    bigselRecordINPP = 65,
    bigselRecordEGU = 66,
    bigselRecordHOPR = 67,
    bigselRecordLOPR = 68,
    bigselRecordHIHI = 69,
    bigselRecordLOLO = 70,
    bigselRecordHIGH = 71,
    bigselRecordLOW = 72,
    bigselRecordHHSV = 73,
    bigselRecordLLSV = 74,
    bigselRecordHSV = 75,
    bigselRecordLSV = 76,
    bigselRecordHYST = 77,
    bigselRecordADEL = 78,
    bigselRecordMDEL = 79,
    bigselRecordA = 80,
    bigselRecordB = 81,
    bigselRecordC = 82,
    bigselRecordD = 83,
    bigselRecordE = 84,
    bigselRecordF = 85,
    bigselRecordG = 86,
    bigselRecordH = 87,
    bigselRecordI = 88,
    bigselRecordJ = 89,
    bigselRecordK = 90,
    bigselRecordL = 91,
    bigselRecordM = 92,
    bigselRecordN = 93,
    bigselRecordO = 94,
    bigselRecordP = 95,
    bigselRecordLA = 96,
    bigselRecordLB = 97,
    bigselRecordLC = 98,
    bigselRecordLD = 99,
    bigselRecordLE = 100,
    bigselRecordLF = 101,
    bigselRecordLG = 102,
    bigselRecordLH = 103,
    bigselRecordLI = 104,
    bigselRecordLJ = 105,
    bigselRecordLK = 106,
    bigselRecordLL = 107,
    bigselRecordLM = 108,
    bigselRecordLN = 109,
    bigselRecordLO = 110,
    bigselRecordLP = 111,
    bigselRecordLALM = 112,
    bigselRecordALST = 113,
    bigselRecordMLST = 114,
    bigselRecordNLST = 115
} bigselFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
#include <epicsExport.h>
static int bigselRecordSizeOffset(dbRecordType *prt)
{
    bigselRecord *prec = 0;

    assert(prt->no_fields == 116);
    prt->papFldDes[bigselRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[bigselRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[bigselRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[bigselRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[bigselRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[bigselRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[bigselRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[bigselRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[bigselRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[bigselRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[bigselRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[bigselRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[bigselRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[bigselRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[bigselRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[bigselRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[bigselRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[bigselRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[bigselRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[bigselRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[bigselRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[bigselRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[bigselRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[bigselRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[bigselRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[bigselRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[bigselRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[bigselRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[bigselRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[bigselRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[bigselRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[bigselRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[bigselRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[bigselRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[bigselRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[bigselRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[bigselRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[bigselRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[bigselRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[bigselRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[bigselRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[bigselRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[bigselRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[bigselRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[bigselRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[bigselRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[bigselRecordSELM]->size = sizeof(prec->selm);
    prt->papFldDes[bigselRecordSELN]->size = sizeof(prec->seln);
    prt->papFldDes[bigselRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[bigselRecordNVL]->size = sizeof(prec->nvl);
    prt->papFldDes[bigselRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[bigselRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[bigselRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[bigselRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[bigselRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[bigselRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[bigselRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[bigselRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[bigselRecordINPI]->size = sizeof(prec->inpi);
    prt->papFldDes[bigselRecordINPJ]->size = sizeof(prec->inpj);
    prt->papFldDes[bigselRecordINPK]->size = sizeof(prec->inpk);
    prt->papFldDes[bigselRecordINPL]->size = sizeof(prec->inpl);
    prt->papFldDes[bigselRecordINPM]->size = sizeof(prec->inpm);
    prt->papFldDes[bigselRecordINPN]->size = sizeof(prec->inpn);
    prt->papFldDes[bigselRecordINPO]->size = sizeof(prec->inpo);
    prt->papFldDes[bigselRecordINPP]->size = sizeof(prec->inpp);
    prt->papFldDes[bigselRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[bigselRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[bigselRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[bigselRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[bigselRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[bigselRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[bigselRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[bigselRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[bigselRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[bigselRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[bigselRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[bigselRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[bigselRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[bigselRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[bigselRecordA]->size = sizeof(prec->a);
    prt->papFldDes[bigselRecordB]->size = sizeof(prec->b);
    prt->papFldDes[bigselRecordC]->size = sizeof(prec->c);
    prt->papFldDes[bigselRecordD]->size = sizeof(prec->d);
    prt->papFldDes[bigselRecordE]->size = sizeof(prec->e);
    prt->papFldDes[bigselRecordF]->size = sizeof(prec->f);
    prt->papFldDes[bigselRecordG]->size = sizeof(prec->g);
    prt->papFldDes[bigselRecordH]->size = sizeof(prec->h);
    prt->papFldDes[bigselRecordI]->size = sizeof(prec->i);
    prt->papFldDes[bigselRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[bigselRecordK]->size = sizeof(prec->k);
    prt->papFldDes[bigselRecordL]->size = sizeof(prec->l);
    prt->papFldDes[bigselRecordM]->size = sizeof(prec->m);
    prt->papFldDes[bigselRecordN]->size = sizeof(prec->n);
    prt->papFldDes[bigselRecordO]->size = sizeof(prec->o);
    prt->papFldDes[bigselRecordP]->size = sizeof(prec->p);
    prt->papFldDes[bigselRecordLA]->size = sizeof(prec->la);
    prt->papFldDes[bigselRecordLB]->size = sizeof(prec->lb);
    prt->papFldDes[bigselRecordLC]->size = sizeof(prec->lc);
    prt->papFldDes[bigselRecordLD]->size = sizeof(prec->ld);
    prt->papFldDes[bigselRecordLE]->size = sizeof(prec->le);
    prt->papFldDes[bigselRecordLF]->size = sizeof(prec->lf);
    prt->papFldDes[bigselRecordLG]->size = sizeof(prec->lg);
    prt->papFldDes[bigselRecordLH]->size = sizeof(prec->lh);
    prt->papFldDes[bigselRecordLI]->size = sizeof(prec->li);
    prt->papFldDes[bigselRecordLJ]->size = sizeof(prec->lj);
    prt->papFldDes[bigselRecordLK]->size = sizeof(prec->lk);
    prt->papFldDes[bigselRecordLL]->size = sizeof(prec->ll);
    prt->papFldDes[bigselRecordLM]->size = sizeof(prec->lm);
    prt->papFldDes[bigselRecordLN]->size = sizeof(prec->ln);
    prt->papFldDes[bigselRecordLO]->size = sizeof(prec->lo);
    prt->papFldDes[bigselRecordLP]->size = sizeof(prec->lp);
    prt->papFldDes[bigselRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[bigselRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[bigselRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[bigselRecordNLST]->size = sizeof(prec->nlst);
    prt->papFldDes[bigselRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[bigselRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[bigselRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[bigselRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[bigselRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[bigselRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[bigselRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[bigselRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[bigselRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[bigselRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[bigselRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[bigselRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[bigselRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[bigselRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[bigselRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[bigselRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[bigselRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[bigselRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[bigselRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[bigselRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[bigselRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[bigselRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[bigselRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[bigselRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[bigselRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[bigselRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[bigselRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[bigselRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[bigselRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[bigselRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[bigselRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[bigselRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[bigselRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[bigselRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[bigselRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[bigselRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[bigselRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[bigselRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[bigselRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[bigselRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[bigselRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[bigselRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[bigselRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[bigselRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[bigselRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[bigselRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[bigselRecordSELM]->offset = (unsigned short)((char *)&prec->selm - (char *)prec);
    prt->papFldDes[bigselRecordSELN]->offset = (unsigned short)((char *)&prec->seln - (char *)prec);
    prt->papFldDes[bigselRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[bigselRecordNVL]->offset = (unsigned short)((char *)&prec->nvl - (char *)prec);
    prt->papFldDes[bigselRecordINPA]->offset = (unsigned short)((char *)&prec->inpa - (char *)prec);
    prt->papFldDes[bigselRecordINPB]->offset = (unsigned short)((char *)&prec->inpb - (char *)prec);
    prt->papFldDes[bigselRecordINPC]->offset = (unsigned short)((char *)&prec->inpc - (char *)prec);
    prt->papFldDes[bigselRecordINPD]->offset = (unsigned short)((char *)&prec->inpd - (char *)prec);
    prt->papFldDes[bigselRecordINPE]->offset = (unsigned short)((char *)&prec->inpe - (char *)prec);
    prt->papFldDes[bigselRecordINPF]->offset = (unsigned short)((char *)&prec->inpf - (char *)prec);
    prt->papFldDes[bigselRecordINPG]->offset = (unsigned short)((char *)&prec->inpg - (char *)prec);
    prt->papFldDes[bigselRecordINPH]->offset = (unsigned short)((char *)&prec->inph - (char *)prec);
    prt->papFldDes[bigselRecordINPI]->offset = (unsigned short)((char *)&prec->inpi - (char *)prec);
    prt->papFldDes[bigselRecordINPJ]->offset = (unsigned short)((char *)&prec->inpj - (char *)prec);
    prt->papFldDes[bigselRecordINPK]->offset = (unsigned short)((char *)&prec->inpk - (char *)prec);
    prt->papFldDes[bigselRecordINPL]->offset = (unsigned short)((char *)&prec->inpl - (char *)prec);
    prt->papFldDes[bigselRecordINPM]->offset = (unsigned short)((char *)&prec->inpm - (char *)prec);
    prt->papFldDes[bigselRecordINPN]->offset = (unsigned short)((char *)&prec->inpn - (char *)prec);
    prt->papFldDes[bigselRecordINPO]->offset = (unsigned short)((char *)&prec->inpo - (char *)prec);
    prt->papFldDes[bigselRecordINPP]->offset = (unsigned short)((char *)&prec->inpp - (char *)prec);
    prt->papFldDes[bigselRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[bigselRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[bigselRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[bigselRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[bigselRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[bigselRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[bigselRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[bigselRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[bigselRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[bigselRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[bigselRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[bigselRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[bigselRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[bigselRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[bigselRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[bigselRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[bigselRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[bigselRecordD]->offset = (unsigned short)((char *)&prec->d - (char *)prec);
    prt->papFldDes[bigselRecordE]->offset = (unsigned short)((char *)&prec->e - (char *)prec);
    prt->papFldDes[bigselRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[bigselRecordG]->offset = (unsigned short)((char *)&prec->g - (char *)prec);
    prt->papFldDes[bigselRecordH]->offset = (unsigned short)((char *)&prec->h - (char *)prec);
    prt->papFldDes[bigselRecordI]->offset = (unsigned short)((char *)&prec->i - (char *)prec);
    prt->papFldDes[bigselRecordJ]->offset = (unsigned short)((char *)&prec->j - (char *)prec);
    prt->papFldDes[bigselRecordK]->offset = (unsigned short)((char *)&prec->k - (char *)prec);
    prt->papFldDes[bigselRecordL]->offset = (unsigned short)((char *)&prec->l - (char *)prec);
    prt->papFldDes[bigselRecordM]->offset = (unsigned short)((char *)&prec->m - (char *)prec);
    prt->papFldDes[bigselRecordN]->offset = (unsigned short)((char *)&prec->n - (char *)prec);
    prt->papFldDes[bigselRecordO]->offset = (unsigned short)((char *)&prec->o - (char *)prec);
    prt->papFldDes[bigselRecordP]->offset = (unsigned short)((char *)&prec->p - (char *)prec);
    prt->papFldDes[bigselRecordLA]->offset = (unsigned short)((char *)&prec->la - (char *)prec);
    prt->papFldDes[bigselRecordLB]->offset = (unsigned short)((char *)&prec->lb - (char *)prec);
    prt->papFldDes[bigselRecordLC]->offset = (unsigned short)((char *)&prec->lc - (char *)prec);
    prt->papFldDes[bigselRecordLD]->offset = (unsigned short)((char *)&prec->ld - (char *)prec);
    prt->papFldDes[bigselRecordLE]->offset = (unsigned short)((char *)&prec->le - (char *)prec);
    prt->papFldDes[bigselRecordLF]->offset = (unsigned short)((char *)&prec->lf - (char *)prec);
    prt->papFldDes[bigselRecordLG]->offset = (unsigned short)((char *)&prec->lg - (char *)prec);
    prt->papFldDes[bigselRecordLH]->offset = (unsigned short)((char *)&prec->lh - (char *)prec);
    prt->papFldDes[bigselRecordLI]->offset = (unsigned short)((char *)&prec->li - (char *)prec);
    prt->papFldDes[bigselRecordLJ]->offset = (unsigned short)((char *)&prec->lj - (char *)prec);
    prt->papFldDes[bigselRecordLK]->offset = (unsigned short)((char *)&prec->lk - (char *)prec);
    prt->papFldDes[bigselRecordLL]->offset = (unsigned short)((char *)&prec->ll - (char *)prec);
    prt->papFldDes[bigselRecordLM]->offset = (unsigned short)((char *)&prec->lm - (char *)prec);
    prt->papFldDes[bigselRecordLN]->offset = (unsigned short)((char *)&prec->ln - (char *)prec);
    prt->papFldDes[bigselRecordLO]->offset = (unsigned short)((char *)&prec->lo - (char *)prec);
    prt->papFldDes[bigselRecordLP]->offset = (unsigned short)((char *)&prec->lp - (char *)prec);
    prt->papFldDes[bigselRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[bigselRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[bigselRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[bigselRecordNLST]->offset = (unsigned short)((char *)&prec->nlst - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return(0);
}
epicsExportRegistrar(bigselRecordSizeOffset);
#ifdef __cplusplus
}
#endif
#endif /*GEN_SIZE_OFFSET*/

#endif /* INC_bigselRecord_H */ 
