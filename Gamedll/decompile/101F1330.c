/*
 * func-name: sub_101F1330
 * func-address: 0x101f1330
 * callers: 0x1000323d
 * callees: 0x10009d68, 0x1000b1a4, 0x1000bc76, 0x1000ca6d, 0x1000f5d3, 0x10017db9, 0x102c9d62
 */

int __stdcall sub_101F1330(Event *a1)
{
  struct BinStream *Stream; // eax
  int v3; // [esp+0h] [ebp-E8h]
  int v4; // [esp+0h] [ebp-E8h]
  int v5; // [esp+4h] [ebp-E4h]
  int v6; // [esp+4h] [ebp-E4h]
  char v7[208]; // [esp+8h] [ebp-E0h] BYREF
  int v8; // [esp+E4h] [ebp-4h]

  sub_10017DB9(v3, v5);
  v8 = 0;
  Stream = Event::GetStream(a1);
  sub_1000CA6D((int)Stream, (int)v7);
  if ( sub_10009D68(v7[0]) )
    sub_1000B1A4((int)v7);
  else
    sub_1000F5D3((int)v7);
  v8 = -1;
  return sub_1000BC76(v4, v6);
}
