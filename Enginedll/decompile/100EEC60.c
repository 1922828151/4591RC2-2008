/*
 * func-name: ?GetNodeMatrix@StaticModel@@QAE?AVMatrix@@PAX@Z
 * func-address: 0x100eec60
 * callers: none
 * callees: 0x101786e0, 0x101a251c
 */

float *__stdcall StaticModel::GetNodeMatrix(float *a1, int a2)
{
  *a1 = 0.0;
  a1[1] = 0.0;
  a1[2] = 0.0;
  a1[4] = 0.0;
  a1[5] = 0.0;
  a1[6] = 0.0;
  a1[8] = 0.0;
  a1[9] = 0.0;
  a1[10] = 0.0;
  a1[12] = 0.0;
  a1[13] = 0.0;
  a1[14] = 0.0;
  memset(a1, 0, 0x40u);
  sub_101786E0(1.0);
  a1[15] = 1.0;
  if ( a2 )
    qmemcpy(a1, (const void *)(a2 + 164), 0x40u);
  return a1;
}
