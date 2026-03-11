/*
 * func-name: ?DeserializationComplete@Terrain@@UAEXXZ
 * func-address: 0x10164ad0
 * callers: none
 * callees: 0x1007ec70, 0x10136140, 0x10136530, 0x1015f510, 0x10162ce0, 0x101a24ac
 */

void __thiscall Terrain::DeserializationComplete(Terrain *this)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v3; // eax
  int last_of; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  struct IDirect3DTexture9 *Texture; // ebx
  HRESULT (__stdcall *GetLevelDesc)(IDirect3DTexture9 *, UINT, D3DSURFACE_DESC *); // ecx
  int v15; // eax
  int v16; // ecx
  bool v17; // cc
  unsigned __int8 *v18; // eax
  int v19; // ebp
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // bl
  unsigned __int8 v22; // dl
  char v23; // [esp-20h] [ebp-184h] BYREF
  int v24; // [esp-1Ch] [ebp-180h]
  int v25; // [esp-18h] [ebp-17Ch]
  int v26; // [esp-14h] [ebp-178h]
  int v27; // [esp-10h] [ebp-174h]
  int v28; // [esp-Ch] [ebp-170h]
  int v29; // [esp-8h] [ebp-16Ch]
  int v30; // [esp-4h] [ebp-168h] BYREF
  float v31; // [esp+0h] [ebp-164h]
  int v32; // [esp+4h] [ebp-160h]
  int v33; // [esp+8h] [ebp-15Ch]
  int v34; // [esp+Ch] [ebp-158h]
  int v35; // [esp+10h] [ebp-154h]
  unsigned int v36; // [esp+14h] [ebp-150h]
  unsigned __int8 v37; // [esp+2Bh] [ebp-139h]
  int *v38; // [esp+2Ch] [ebp-138h]
  int v39; // [esp+30h] [ebp-134h]
  _DWORD v40[2]; // [esp+34h] [ebp-130h] BYREF
  int v41[7]; // [esp+3Ch] [ebp-128h] BYREF
  _DWORD v42[7]; // [esp+58h] [ebp-10Ch] BYREF
  _BYTE v43[28]; // [esp+74h] [ebp-F0h] BYREF
  DWORD NumberOfBytesRead[7]; // [esp+90h] [ebp-D4h] BYREF
  _BYTE v45[28]; // [esp+ACh] [ebp-B8h] BYREF
  int v46[7]; // [esp+C8h] [ebp-9Ch] BYREF
  _BYTE v47[28]; // [esp+E4h] [ebp-80h] BYREF
  CHAR v48[28]; // [esp+100h] [ebp-64h] BYREF
  CHAR FileName[28]; // [esp+11Ch] [ebp-48h] BYREF
  D3DSURFACE_DESC v50; // [esp+138h] [ebp-2Ch] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v51; // [esp+158h] [ebp-Ch]
  void *v52; // [esp+15Ch] [ebp-8h]
  int v53; // [esp+160h] [ebp-4h]

  v53 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v52 = &loc_101B6216;
  v51 = ExceptionList;
  v36 = (unsigned int)this + 1240;
  *((_BYTE *)this + 1476) = 0;
  std::string::operator=((char *)this + 1268, v36);
  if ( *((_BYTE *)Editor::Instance() + 2056) )
  {
    if ( *(_DWORD *)(*((_DWORD *)this + 178) + 3212) < 0x10u )
      v3 = *((_DWORD *)this + 178) + 3192;
    else
      v3 = *(_DWORD *)(*((_DWORD *)this + 178) + 3192);
    std::string::string(v43, v3);
    v53 = 0;
    last_of = std::string::find_last_of(v43, ".", std::string::npos, 1);
    std::string::substr(v43, v41, 0, last_of);
    LOBYTE(v53) = 1;
    if ( std::string::find_last_of(v41, "\\", std::string::npos, 1) != -1 )
    {
      v5 = std::string::find_last_of(v41, "\\", std::string::npos, 1);
      v6 = std::string::substr(v41, v42, 0, v5);
      LOBYTE(v53) = 2;
      std::string::operator=(v41, v6);
      LOBYTE(v53) = 1;
      std::string::~string(v42);
    }
    v7 = std::operator+<char>(v46, v41, "\\");
    LOBYTE(v53) = 3;
    v8 = std::operator+<char>(FileName, v7, (char *)this + 444);
    LOBYTE(v53) = 4;
    std::operator+<char>(v45, v8, ".hmd");
    LOBYTE(v53) = 6;
    std::string::~string(FileName);
    LOBYTE(v53) = 7;
    std::string::~string(v46);
    v38 = &v30;
    std::string::string(&v30, v45);
    sub_1015F510((int)this + 1352, v30, (LPCSTR)LODWORD(v31), v32, v33, v34, v35, v36);
    v9 = std::operator+<char>(v48, v41, "\\");
    LOBYTE(v53) = 8;
    v10 = std::operator+<char>(v47, v9, (char *)this + 444);
    LOBYTE(v53) = 9;
    std::operator+<char>(NumberOfBytesRead, v10, ".suf");
    LOBYTE(v53) = 11;
    std::string::~string(v47);
    LOBYTE(v53) = 12;
    std::string::~string(v48);
    sub_10162CE0((_DWORD *)this + 346, (DWORD)NumberOfBytesRead);
    LOBYTE(v53) = 7;
    std::string::~string(NumberOfBytesRead);
    LOBYTE(v53) = 1;
    std::string::~string(v45);
    LOBYTE(v53) = 0;
    std::string::~string(v41);
    v53 = -1;
    std::string::~string(v43);
  }
  v11 = *((_DWORD *)this + 397);
  v12 = 0;
  if ( v11 )
  {
    v36 = 0;
    *(float *)&v35 = 0.0;
    *(float *)&v34 = 1.0;
    *(float *)&v33 = 1.0;
    *(float *)&v32 = 0.0;
    v31 = 0.0;
    v30 = 0;
    v38 = (int *)&v23;
    std::string::string(&v23, v11 + 100);
    if ( Texture::Load(
           *((_DWORD *)this + 397),
           v23,
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           *(float *)&v32,
           *(float *)&v33,
           *(float *)&v34,
           *(float *)&v35,
           v36) )
    {
      Texture = Texture::GetTexture(*((Texture **)this + 397));
      GetLevelDesc = Texture->lpVtbl->GetLevelDesc;
      v38 = (int *)Texture;
      GetLevelDesc(Texture, 0, &v50);
      v15 = *((_DWORD *)this + 397);
      v42[1] = 0;
      v42[0] = 0;
      v42[2] = *(_DWORD *)(v15 + 80);
      v42[3] = *(_DWORD *)(v15 + 84);
      if ( !Texture->lpVtbl->LockRect(Texture, 0, (D3DLOCKED_RECT *)v40, (const RECT *)v42, 16) )
      {
        *((_DWORD *)this + 334) = operator new(
                                    *(_DWORD *)(*((_DWORD *)this + 397) + 80)
                                  * *(_DWORD *)(*((_DWORD *)this + 397) + 84));
        v16 = 0;
        v17 = *(_DWORD *)(*((_DWORD *)this + 397) + 84) <= 0;
        v39 = 0;
        if ( v17 )
          goto LABEL_33;
        while ( 1 )
        {
          v18 = (unsigned __int8 *)(v40[1] + v16 * v40[0]);
          v19 = 0;
          if ( *(int *)(*((_DWORD *)this + 397) + 80) <= 0 )
            goto LABEL_32;
          do
          {
            v20 = *v18;
            v21 = v18[1];
            if ( v21 <= *v18 )
            {
              if ( v20 >= v18[2] && v20 >= v18[3] )
              {
                *(_BYTE *)(v12 + *((_DWORD *)this + 334)) = 16;
                goto LABEL_30;
              }
              if ( v21 < v20 )
                goto LABEL_21;
            }
            if ( v21 < v18[2] || v21 < v18[3] )
            {
LABEL_21:
              v37 = v18[2];
              if ( v37 < v20 || v37 < v21 || v37 < v18[3] )
              {
                v22 = v18[3];
                if ( v22 < v20 || v22 < v21 || v22 < v37 )
                  *(_BYTE *)(v12 + *((_DWORD *)this + 334)) = -1;
                else
                  *(_BYTE *)(v12 + *((_DWORD *)this + 334)) = 17;
              }
              else
              {
                *(_BYTE *)(v12 + *((_DWORD *)this + 334)) = 0;
              }
            }
            else
            {
              *(_BYTE *)(v12 + *((_DWORD *)this + 334)) = 1;
            }
LABEL_30:
            ++v19;
            ++v12;
            v18 += 4;
          }
          while ( v19 < *(_DWORD *)(*((_DWORD *)this + 397) + 80) );
          Texture = (struct IDirect3DTexture9 *)v38;
          v16 = v39;
LABEL_32:
          v17 = ++v16 < *(_DWORD *)(*((_DWORD *)this + 397) + 84);
          v39 = v16;
          if ( !v17 )
          {
LABEL_33:
            Texture->lpVtbl->UnlockRect(Texture, 0);
            return;
          }
        }
      }
    }
  }
}
