/*
 * func-name: ?GetMatrix@XMLSystem@@QAE?AVMatrix@@PAVDOMNode@xercesc_2_5@@_N@Z
 * func-address: 0x1004add0
 * callers: none
 * callees: 0x100956d0, 0x101786e0, 0x101a251c
 */

float *__stdcall XMLSystem::GetMatrix(float *a1, int a2, int a3)
{
  Error("GetMatrix() is not yet implemented");
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
  return a1;
}
