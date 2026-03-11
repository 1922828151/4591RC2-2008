/*
 * func-name: sub_1016C920
 * func-address: 0x1016c920
 * callers: 0x100b6f70, 0x100d5d50, 0x100d5f50
 * callees: 0x10057610, 0x101a26a0
 */

int *sub_1016C920()
{
  if ( (dword_11248AC4 & 1) == 0 )
  {
    dword_11248AC4 |= 1u;
    dword_11248AB4 = (int)&CTextMgr::`vftable';
    dword_11248ABC = sub_10057610();
    *((_BYTE *)dword_11248ABC + 45) = 1;
    *((_DWORD *)dword_11248ABC + 1) = dword_11248ABC;
    *(_DWORD *)dword_11248ABC = dword_11248ABC;
    *((_DWORD *)dword_11248ABC + 2) = dword_11248ABC;
    dword_11248AC0 = 0;
    atexit(sub_101B9730);
  }
  return &dword_11248AB4;
}
