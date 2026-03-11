/*
 * func-name: sub_100E2E40
 * func-address: 0x100e2e40
 * callers: 0x1000e0ac
 * callees: 0x1000c090, 0x102c9f53
 */

void *sub_100E2E40()
{
  int v1; // [esp+0h] [ebp-10h]
  int v2; // [esp+4h] [ebp-Ch]

  if ( (dword_103B5C8C & 1) == 0 )
  {
    dword_103B5C8C |= 1u;
    sub_1000C090(v1, v2);
    atexit(sub_10305870);
  }
  return &unk_103B5C68;
}
