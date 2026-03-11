/*
 * func-name: ?EditTexture@Terrain@@QAEXAAVVector@@@Z
 * func-address: 0x10168ec0
 * callers: 0x10169d00
 * callees: 0x100dad30, 0x100db2a0, 0x1015fcb0, 0x10168a40, 0x101a26c0
 */

void __userpurge Terrain::EditTexture(Terrain *this@<ecx>, int a2@<edi>, struct Vector *a3)
{
  Input *v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  LONG v8; // ecx
  unsigned int v9; // edi
  int i; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // [esp+8h] [ebp-1Ch]
  RECT rcSrc1; // [esp+14h] [ebp-10h] BYREF

  if ( *((_DWORD *)this + 380) != 6 )
  {
    v13 = *((_DWORD *)this + 383);
    v4 = Input::Instance();
    if ( Input::ControlJustPressed(v4, v13, 0) )
      Terrain::RebuildMaterialBlock(this, a2, (int)this);
    v5 = (int)((*(float *)a3 - *((float *)this + 214)) / *((float *)this + 361)
             + (double)((*((_DWORD *)this + 340) - 1) / 2));
    v6 = (int)((*((float *)a3 + 2) - *((float *)this + 216)) / *((float *)this + 361)
             + (double)((*((_DWORD *)this + 341) - 1) / 2));
    v7 = (int)*((float *)this + 378);
    rcSrc1.left = v5 - v7;
    v8 = v7 + v5;
    v9 = 0;
    rcSrc1.top = v6 - v7;
    rcSrc1.right = v8;
    rcSrc1.bottom = v6 + v7;
    for ( i = 0; ; i += 52 )
    {
      v11 = *((_DWORD *)this + 307);
      if ( !v11 || v9 >= (*((_DWORD *)this + 308) - v11) / 52 )
        break;
      v12 = *((_DWORD *)this + 307);
      if ( !v12 || v9 >= (*((_DWORD *)this + 308) - v12) / 52 )
        invalid_parameter_noinfo();
      sub_1015FCB0(
        i + *((_DWORD *)this + 307),
        &rcSrc1,
        *((int **)this + 293),
        *((_DWORD *)this + 380),
        *((float *)this + 379));
      ++v9;
    }
  }
}
