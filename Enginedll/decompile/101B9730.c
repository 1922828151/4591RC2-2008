/*
 * func-name: sub_101B9730
 * func-address: 0x101b9730
 * callers: 0x1016c920
 * callees: 0x1016d580, 0x101a2500
 */

void __cdecl sub_101B9730()
{
  int v0; // [esp+4h] [ebp-8h] BYREF

  dword_11248AB4 = (int)&CTextMgr::`vftable';
  sub_1016D580(
    (int)&unk_11248AB8,
    &v0,
    (int)&unk_11248AB8,
    *(_DWORD *)dword_11248ABC,
    (int)&unk_11248AB8,
    (int)dword_11248ABC);
  operator delete(dword_11248ABC);
  dword_11248ABC = 0;
  dword_11248AC0 = 0;
}
