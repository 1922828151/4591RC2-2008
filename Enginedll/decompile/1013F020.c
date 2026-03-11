/*
 * func-name: sub_1013F020
 * func-address: 0x1013f020
 * callers: 0x10026cc0, 0x1002fdd0, 0x100325e0, 0x10059b50, 0x10068320, 0x100f5510, 0x100f5fb0, 0x100f8050, 0x1013f380, 0x1013f480, 0x10161120, 0x10161710, 0x10161890, 0x1016f820, 0x1016fa20, 0x101b9190, 0x101b91a0, 0x101b91b0, 0x101b91c0, 0x101b91d0, 0x101b91e0, 0x101b91f0
 * callees: 0x101a2500
 */

void __thiscall sub_1013F020(int this)
{
  _DWORD **v2; // ecx
  _DWORD *v3; // eax
  bool v4; // zf
  _DWORD *v5; // edi

  v2 = *(_DWORD ***)(this + 4);
  v3 = *v2;
  *v2 = v2;
  *(_DWORD *)(*(_DWORD *)(this + 4) + 4) = *(_DWORD *)(this + 4);
  v4 = v3 == *(_DWORD **)(this + 4);
  *(_DWORD *)(this + 8) = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*v3;
      operator delete(v3);
      v3 = v5;
    }
    while ( v5 != *(_DWORD **)(this + 4) );
  }
  operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
}
