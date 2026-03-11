/*
 * func-name: sub_10005190
 * func-address: 0x10005190
 * callers: 0x100054a0
 * callees: 0x10004e00
 */

double *__thiscall sub_10005190(void *this, int a2)
{
  double v2; // st7
  int v3; // ecx
  double v4; // st6
  double *result; // eax
  double *v6; // edx
  double v7; // st4
  double v8; // [esp+4h] [ebp-18h]
  double v9; // [esp+Ch] [ebp-10h]
  double v10; // [esp+14h] [ebp-8h]

  sub_10004E00((int)this, a2);
  v2 = *(double *)(a2 + 24);
  v4 = 1.0 / *(double *)(a2 + 8 * *(_DWORD *)(v3 + 104));
  result = (double *)(a2 + 8 * *(_DWORD *)(v3 + 100));
  v6 = (double *)(a2 + 8 * *(_DWORD *)(v3 + 96));
  v7 = v4 * v4 * v4;
  *(double *)(v3 + 192) = *(double *)(v3 + 120) * v4;
  *(double *)(v3 + 200) = *(double *)(v3 + 128) * v4;
  v10 = *(double *)(v3 + 112) * v2;
  *(double *)(v3 + 208) = -((*result * *(double *)(v3 + 128) + *v6 * *(double *)(v3 + 120) + v10) * (v4 * v4));
  *(double *)(v3 + 216) = v4 * *(double *)(v3 + 136);
  *(double *)(v3 + 224) = *(double *)(v3 + 152) * v4;
  *(double *)(v3 + 232) = ((v10 + (*result * *(double *)(v3 + 128) + *v6 * *(double *)(v3 + 120)) * 2.0) * v2
                         + *v6 * *v6 * *(double *)(v3 + 136)
                         + *result * *result * *(double *)(v3 + 152)
                         + *result * *v6 * *(double *)(v3 + 144) * 2.0)
                        * v7;
  *(double *)(v3 + 240) = v4 * *(double *)(v3 + 160);
  *(double *)(v3 + 248) = *(double *)(v3 + 184) * v4;
  v8 = *result * *result;
  v9 = *v6 * *v6;
  *(double *)(v3 + 256) = -(((((*result * *(double *)(v3 + 128) + *v6 * *(double *)(v3 + 120)) * 3.0 + v10) * v2
                            + (*result * *v6 * *(double *)(v3 + 144) * 2.0
                             + v9 * *(double *)(v3 + 136)
                             + v8 * *(double *)(v3 + 152))
                            * 3.0)
                           * v2
                           + (v9 * *result * *(double *)(v3 + 168) + v8 * *(double *)(v3 + 176) * *v6) * 3.0
                           + v9 * *v6 * *(double *)(v3 + 160)
                           + v8 * *result * *(double *)(v3 + 184))
                          * (v7
                           * v4));
  *(double *)(v3 + 264) = v4 * *(double *)(v3 + 168);
  *(double *)(v3 + 272) = -(v4
                          * v4
                          * (*result * *(double *)(v3 + 184) + *(double *)(v3 + 176) * *v6 + *(double *)(v3 + 152) * v2));
  *(double *)(v3 + 280) = v7
                        * (2.0 * (*result * *v6 * *(double *)(v3 + 168))
                         + v2
                         * ((*result * *(double *)(v3 + 144) + *v6 * *(double *)(v3 + 136)) * 2.0
                          + *(double *)(v3 + 120) * v2)
                         + *result * *result * *(double *)(v3 + 176)
                         + *v6 * *v6 * *(double *)(v3 + 160));
  return result;
}
