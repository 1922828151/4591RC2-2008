/*
 * func-name: sub_1007C180
 * func-address: 0x1007c180
 * callers: 0x1007c450
 * callees: 0x1009dd90, 0x1009ee50, 0x101a2500
 */

int __thiscall sub_1007C180(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        _DWORD *a10)
{
  unsigned int i; // ebp
  int v11; // esi
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  int v15; // esi
  int v16; // esi
  int v17; // ecx
  int v18; // esi
  ModelFrame **v19; // eax
  int v20; // ecx
  void (__cdecl *v21)(); // edi
  int v22; // esi
  int v23; // ecx
  int v24; // esi
  _DWORD *v25; // eax
  _BYTE v28[4]; // [esp+18h] [ebp-1Ch] BYREF
  void *v29; // [esp+1Ch] [ebp-18h]
  int v30; // [esp+20h] [ebp-14h]
  int v31; // [esp+24h] [ebp-10h]
  int v32; // [esp+30h] [ebp-4h]

  v32 = 0;
  for ( i = 0; ; ++i )
  {
    v11 = this[4];
    v12 = *(_DWORD *)(v11 + 3224);
    if ( !v12 || i >= (*(_DWORD *)(v11 + 3228) - v12) >> 2 )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 3224) + 4 * i) + 716) )
    {
      v13 = this[4];
      v14 = *(_DWORD *)(v13 + 3224);
      v15 = v13 + 3220;
      if ( !v14 || i >= (*(_DWORD *)(v15 + 8) - v14) >> 2 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(*(_DWORD *)(v15 + 4) + 4 * i) + 444, &a2) )
      {
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v16 = this[4];
        v17 = *(_DWORD *)(v16 + 3224);
        v18 = v16 + 3220;
        LOBYTE(v32) = 1;
        if ( !v17 || i >= (*(_DWORD *)(v18 + 8) - v17) >> 2 )
          invalid_parameter_noinfo();
        ModelFrame::EnumerateMeshes(v28);
        v19 = (ModelFrame **)v29;
        if ( v29 && (v20 = v30, (v30 - (int)v29) >> 2) )
        {
          v21 = invalid_parameter_noinfo;
        }
        else
        {
          v21 = invalid_parameter_noinfo;
          invalid_parameter_noinfo();
          v20 = v30;
          v19 = (ModelFrame **)v29;
        }
        if ( *v19 )
        {
          if ( !((v20 - (int)v19) >> 2) )
          {
            v21();
            v19 = (ModelFrame **)v29;
          }
          if ( ModelFrame::GetMesh(*v19, 0) )
          {
            v22 = this[4];
            v23 = *(_DWORD *)(v22 + 3224);
            v24 = v22 + 3220;
            if ( !v23 || i >= (*(_DWORD *)(v24 + 8) - v23) >> 2 )
              v21();
            *a9 = *(_DWORD *)(*(_DWORD *)(v24 + 4) + 4 * i);
            v25 = v29;
            if ( !v29 || !((v30 - (int)v29) >> 2) )
            {
              v21();
              v25 = v29;
            }
            *a10 = *v25;
            operator delete(v25);
            v29 = 0;
            v30 = 0;
            v31 = 0;
            break;
          }
          v19 = (ModelFrame **)v29;
        }
        LOBYTE(v32) = 0;
        if ( v19 )
          operator delete(v19);
        v29 = 0;
        v30 = 0;
        v31 = 0;
      }
    }
  }
  v32 = -1;
  return std::string::~string(&a2);
}
