/*
 * func-name: ?GetBoneNodes@Precacher@@SAXPAVModel@@PAUBoneNodeInfo@1@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
 * func-address: 0x1010a350
 * callers: none
 * callees: 0x100116a0, 0x100993b0, 0x1009eed0, 0x100a1d10, 0x100ee5c0, 0x101a2500
 */

void __cdecl Precacher::GetBoneNodes(ModelFrame **a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // esi
  int v4; // eax
  int v5; // eax
  struct ModelFrame *NodeHandle; // eax
  struct ModelFrame *v7; // ebp
  char *v8; // ecx
  char *v9; // eax
  char *v10; // ebx
  unsigned int i; // esi
  _DWORD *v12; // esi
  unsigned int v13; // ebx
  int v14; // eax
  bool v15; // cc
  int v16; // eax
  char *v17; // ebp
  int v18; // ebx
  char *v19; // esi
  int v20; // eax
  char v21; // [esp-20h] [ebp-68h] BYREF
  int v22; // [esp-1Ch] [ebp-64h]
  int v23; // [esp-18h] [ebp-60h]
  int v24; // [esp-14h] [ebp-5Ch]
  int v25; // [esp-10h] [ebp-58h]
  int v26; // [esp-Ch] [ebp-54h]
  int v27; // [esp-8h] [ebp-50h]
  struct ModelFrame *v28; // [esp-4h] [ebp-4Ch]
  int v29; // [esp+10h] [ebp-38h]
  void *Source; // [esp+14h] [ebp-34h]
  int v31; // [esp+18h] [ebp-30h]
  unsigned int v32; // [esp+1Ch] [ebp-2Ch]
  char *v33; // [esp+20h] [ebp-28h]
  int v34; // [esp+24h] [ebp-24h] BYREF
  int v35; // [esp+2Ch] [ebp-1Ch] BYREF
  void *Destination; // [esp+30h] [ebp-18h]
  char *v37; // [esp+34h] [ebp-14h]
  int v38; // [esp+38h] [ebp-10h]
  int v39; // [esp+44h] [ebp-4h]

  if ( a1 )
  {
    if ( a2 )
    {
      Destination = 0;
      v37 = 0;
      v38 = 0;
      v3 = 0;
      v39 = 0;
      v32 = 0;
      if ( sub_100993B0(a2) )
      {
        v31 = 0;
        do
        {
          v4 = a2[1];
          v28 = 0;
          if ( !v4 || v3 >= (a2[2] - v4) / 28 )
            invalid_parameter_noinfo();
          v5 = v31 + a2[1];
          v33 = &v21;
          std::string::string(&v21, v5);
          NodeHandle = StaticModel::GetNodeHandle(a1, v21, v22, v23, v24, v25, v26, v27, v28);
          v7 = NodeHandle;
          if ( NodeHandle && *((_DWORD *)NodeHandle + 90) )
          {
            v8 = v37;
            v9 = (char *)Destination;
            Source = v37;
            if ( Destination > v37 )
            {
              invalid_parameter_noinfo();
              v8 = v37;
              v9 = (char *)Destination;
            }
            v10 = v9;
            if ( v9 > v8 )
              invalid_parameter_noinfo();
            std::vector<Model *>::erase(&v35, &v34, (int)&v35, v10, (int)&v35, (char *)Source);
            ModelFrame::EnumerateFrames(*((_DWORD **)v7 + 90), (int)&v35);
            for ( i = 0; Destination && i < (v37 - (_BYTE *)Destination) >> 2; ++i )
              sub_100116A0(a3, (void *)(*((_DWORD *)Destination + i) + 44));
            v12 = a3;
            sub_100116A0(a3, (char *)v7 + 44);
            v13 = 0;
            Source = 0;
            v29 = 0;
            while ( 1 )
            {
              v14 = a2[5];
              if ( !v14 || v13 >= (a2[6] - v14) / 28 )
                break;
              v15 = v12[1] <= v12[2];
              v33 = (char *)v12[2];
              if ( !v15 )
                invalid_parameter_noinfo();
              v16 = a2[5];
              if ( !v16 || v13 >= (a2[6] - v16) / 28 )
                invalid_parameter_noinfo();
              v17 = (char *)v12[2];
              v18 = v29 + a2[5];
              if ( v12[1] > (unsigned int)v17 )
                invalid_parameter_noinfo();
              v19 = (char *)v12[1];
              if ( (unsigned int)v19 > a3[2] )
                invalid_parameter_noinfo();
              for ( ; v19 != v17; v19 += 28 )
              {
                if ( (unsigned __int8)std::operator==<char>(v19, v18) )
                  break;
              }
              if ( v19 == v33 )
              {
                v20 = a2[5];
                if ( !v20 || (unsigned int)Source >= (a2[6] - v20) / 28 )
                  invalid_parameter_noinfo();
                sub_100116A0(a3, (void *)(v29 + a2[5]));
              }
              Source = (char *)Source + 1;
              v29 += 28;
              v13 = (unsigned int)Source;
              v12 = a3;
            }
            v3 = v32;
          }
          v31 += 28;
          v32 = ++v3;
        }
        while ( v3 < sub_100993B0(a2) );
        if ( Destination )
          operator delete(Destination);
      }
    }
  }
}
