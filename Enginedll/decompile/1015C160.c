/*
 * func-name: ?GetLoadState@SubareaManager@@QAE?AW4SUBAREA_LOAD_STATE@@AAVVector@@0@Z
 * func-address: 0x1015c160
 * callers: 0x1015c210
 * callees: 0x1007ec70, 0x101a26c0
 */

int __thiscall SubareaManager::GetLoadState(int this, float *a2, float *a3)
{
  double v5; // st7
  LONG v6; // eax
  double v7; // st7
  LONG v8; // eax
  double v9; // st7
  RECT rcSrc1; // [esp+4h] [ebp-20h] BYREF
  struct tagRECT rcDst; // [esp+14h] [ebp-10h] BYREF

  if ( !*(_BYTE *)(this + 20)
    || *((_BYTE *)Editor::Instance() + 2056)
    || !*(_DWORD *)(this + 24)
    || !*(_DWORD *)(this + 28) )
  {
    return 0;
  }
  v5 = *a3;
  rcSrc1.left = (int)*a2;
  v6 = (int)v5;
  v7 = a2[2];
  rcSrc1.right = v6;
  v8 = (int)v7;
  v9 = a3[2];
  rcSrc1.top = v8;
  rcSrc1.bottom = (int)v9;
  if ( IntersectRect(&rcDst, &rcSrc1, (const RECT *)(this + 60)) )
    return !IntersectRect(&rcDst, &rcSrc1, (const RECT *)(this + 44));
  else
    return 2;
}
