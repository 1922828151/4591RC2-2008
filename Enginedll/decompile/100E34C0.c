/*
 * func-name: ?PreLoad@Material@@QAEXXZ
 * func-address: 0x100e34c0
 * callers: 0x10138880
 * callees: 0x10175470
 */

void __thiscall Material::PreLoad(Material *this)
{
  unsigned int v2; // ebp
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  int i; // [esp+4h] [ebp-8h]

  if ( !*((_BYTE *)this + 324) )
  {
    v2 = 0;
    for ( i = 0; ; i += 32 )
    {
      v3 = *((_DWORD *)this + 70);
      if ( !v3 || v2 >= (*((_DWORD *)this + 71) - v3) >> 2 )
        break;
      if ( **(_DWORD **)(*((_DWORD *)this + 70) + 4 * v2) == 9 )
      {
        v4 = *((_DWORD *)this + 6);
        if ( v4 )
        {
          if ( (*((_DWORD *)this + 7) - v4) >> 5 > v2 )
          {
            v5 = *((_DWORD *)this + 6);
            v6 = i + v5;
            if ( !v5 || v2 >= (*((_DWORD *)this + 7) - v5) >> 5 )
              invalid_parameter_noinfo();
            v7 = i + *((_DWORD *)this + 6);
            *(_DWORD *)(v7 + 28) = AsyncLoader::SubmitLoadTexture(v6, *((_DWORD *)this + 9));
          }
        }
      }
      ++v2;
    }
    *((_BYTE *)this + 324) = 1;
  }
}
