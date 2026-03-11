/*
 * func-name: sub_10119CC0
 * func-address: 0x10119cc0
 * callers: 0x10096550, 0x10097ea0, 0x10118c10, 0x10118c20, 0x10118ff0, 0x10138380
 * callees: 0x101a26a0
 */

void *sub_10119CC0()
{
  if ( (dword_112417A8 & 1) == 0 )
  {
    dword_112417A8 |= 1u;
    dword_1124179C = 0;
    dword_112417A0 = 0;
    dword_112417A4 = 0;
    atexit(sub_101B9570);
  }
  return &unk_11241794;
}
