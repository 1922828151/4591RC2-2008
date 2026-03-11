/*
 * func-name: ?Render@GUISystem@@UAEXXZ
 * func-address: 0x100d5f50
 * callers: none
 * callees: 0x10064610, 0x100a9b20, 0x101189f0, 0x1016c190, 0x1016c920
 */

void __thiscall GUISystem::Render(
        GUISystem *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        float a17,
        float a18)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  void (__thiscall *v20)(GUISystem *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int); // edx
  struct CREControl *Control; // eax
  struct RenderDevice *v22; // eax
  unsigned int i; // edi
  int v24; // ecx
  int v25; // ecx
  struct RenderDevice *v26; // eax
  int v27; // ebp
  struct RenderDevice *v28; // eax
  int v29; // ebx
  struct RenderDevice *v30; // eax
  struct RenderDevice *v31; // eax
  struct RenderDevice *v32; // eax
  struct RenderDevice *v33; // eax
  struct RenderDevice *v34; // eax
  struct RenderDevice *v35; // eax
  struct RenderDevice *v36; // eax
  struct RenderDevice *v37; // eax
  struct RenderDevice *v38; // eax
  struct RenderDevice *v39; // eax
  unsigned int j; // edi
  int v41; // ecx
  struct RenderDevice *v42; // eax
  int v43; // ecx
  struct RenderDevice *v44; // eax
  int v45; // edx
  struct RenderDevice *v46; // eax
  int v47; // edx
  struct RenderDevice *v48; // ecx
  void (__thiscall *v49)(struct RenderDevice *); // eax
  struct RenderDevice *v50; // eax
  void (__thiscall *v51)(struct RenderDevice *, _DWORD); // edx
  struct RenderDevice *v52; // eax
  void (__thiscall *v53)(struct RenderDevice *, _DWORD, int); // edx
  struct RenderDevice *v54; // eax
  struct RenderDevice *v55; // eax
  void (__thiscall *v56)(struct RenderDevice *); // edx
  struct RenderDevice *v57; // eax
  struct RenderDevice *v58; // eax
  int v59; // eax
  void (__stdcall *v60)(_DWORD, int); // edx
  _DWORD v61[7]; // [esp+D8h] [ebp-94h] BYREF
  _DWORD v62[7]; // [esp+F4h] [ebp-78h] BYREF
  int v63; // [esp+110h] [ebp-5Ch]
  int v64; // [esp+114h] [ebp-58h]
  int v65; // [esp+118h] [ebp-54h]
  int v66; // [esp+11Ch] [ebp-50h]
  int v67; // [esp+120h] [ebp-4Ch]
  int v68; // [esp+124h] [ebp-48h]
  int v69; // [esp+128h] [ebp-44h]
  int *v70; // [esp+12Ch] [ebp-40h]
  int v71; // [esp+130h] [ebp-3Ch]
  int v72; // [esp+134h] [ebp-38h]
  int v73; // [esp+138h] [ebp-34h]
  int v74; // [esp+13Ch] [ebp-30h]
  _DWORD *v75; // [esp+140h] [ebp-2Ch]
  float v76; // [esp+144h] [ebp-28h]
  int v77; // [esp+148h] [ebp-24h]
  void *v78; // [esp+14Ch] [ebp-20h]
  int v79; // [esp+150h] [ebp-1Ch]
  int v80; // [esp+154h] [ebp-18h]
  int v81; // [esp+158h] [ebp-14h]
  int v82; // [esp+15Ch] [ebp-10h]
  int v83; // [esp+160h] [ebp-Ch]
  void *v84; // [esp+164h] [ebp-8h]
  int v85; // [esp+168h] [ebp-4h]
  void *retaddr; // [esp+16Ch] [ebp+0h]
  char v87; // [esp+17Fh] [ebp+13h]
  int v88; // [esp+180h] [ebp+14h]

  v85 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v84 = &loc_101ADD08;
  v83 = (int)ExceptionList;
  if ( byte_11240B49 )
  {
    v64 = dword_11240B50;
    v63 = dword_11240B4C;
    v76 = COERCE_FLOAT(v62);
    std::string::string(v62, &unk_11240B74);
    v75 = v61;
    v85 = 0;
    std::string::string(v61, &unk_11240B58);
    v20 = *(void (__thiscall **)(GUISystem *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)this + 20);
    v85 = -1;
    v20(
      this,
      v61[0],
      v61[1],
      v61[2],
      v61[3],
      v61[4],
      v61[5],
      v61[6],
      v62[0],
      v62[1],
      v62[2],
      v62[3],
      v62[4],
      v62[5],
      v62[6],
      v63,
      v64);
    byte_11240B49 = 0;
  }
  if ( *((_BYTE *)this + 8) )
  {
    if ( flt_11240B54 > 0.0 )
    {
      flt_11240B54 = flt_11240B54 - GDeltaTime;
      if ( flt_11240B54 <= 0.0 )
      {
        byte_11240B48 = 0;
        Control = CREDialog::GetControl(*(CREDialog **)(*((_DWORD *)this + 3) + 4), 400);
        (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)Control + 136))(Control, 1);
      }
    }
    v22 = RenderDevice::Instance();
    v88 = (*(int (__thiscall **)(struct RenderDevice *, int, int, int, int, int, int *, int, int, int, int, _DWORD *, float, int, void *, int, int, int, int, int, void *, int))(*(_DWORD *)v22 + 392))(
            v22,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            v72,
            v73,
            v74,
            v75,
            COERCE_FLOAT(LODWORD(v76)),
            v77,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85);
    v87 = 0;
    for ( i = 0; ; ++i )
    {
      v24 = *((_DWORD *)this + 5);
      if ( !v24 || i >= (*((_DWORD *)this + 6) - v24) >> 2 )
        break;
      v25 = *((_DWORD *)this + 5);
      if ( **(_BYTE **)(v25 + 4 * i) )
      {
        if ( !v25 || i >= (*((_DWORD *)this + 6) - v25) >> 2 )
          invalid_parameter_noinfo();
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 5) + 4 * i) + 4) + 16))(LODWORD(GDeltaTime));
      }
    }
    v26 = RenderDevice::Instance();
    v27 = (*(int (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v26 + 432))(v26, 28, 0);
    v28 = RenderDevice::Instance();
    v29 = (*(int (__thiscall **)(struct RenderDevice *, _DWORD, int))(*(_DWORD *)v28 + 452))(v28, 0, 7);
    v30 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v30 + 448))(v30, 0, 7, 0);
    v31 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int))(*(_DWORD *)v31 + 452))(v31, 0, 5);
    v32 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v32 + 448))(v32, 0, 5, 1);
    v33 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int))(*(_DWORD *)v33 + 452))(v33, 0, 6);
    v34 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v34 + 448))(v34, 0, 6, 1);
    v35 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int))(*(_DWORD *)v35 + 452))(v35, 0, 4);
    v36 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v36 + 448))(v36, 0, 4, -16777216);
    v37 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v37 + 440))(v37, 0, 1, 4);
    v38 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v38 + 440))(v38, 0, 2, 4);
    v39 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v39 + 432))(v39, 26, 0);
    for ( j = 0; ; ++j )
    {
      v41 = *((_DWORD *)this + 5);
      if ( !v41 || j >= (*((_DWORD *)this + 6) - v41) >> 2 )
        break;
      if ( **(_BYTE **)(*((_DWORD *)this + 5) + 4 * j) )
      {
        if ( !v87 )
        {
          v87 = 1;
          RenderDevice::Instance();
          RenderDevice::Instance();
          a17 = 0.0;
          a13 = 0;
          a18 = 0.050000001;
          a14 = 0;
          a16 = *((_DWORD *)Canvas::Instance() + 17);
          a15 = *((_DWORD *)Canvas::Instance() + 16);
          v42 = RenderDevice::Instance();
          (*(void (__stdcall **)(_DWORD, int *))(**((_DWORD **)v42 + 427) + 188))(*((_DWORD *)v42 + 427), &a13);
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v88 + 32))(v88, 1.0, 1.0);
        }
        v43 = *((_DWORD *)this + 5);
        if ( !v43 || j >= (*((_DWORD *)this + 6) - v43) >> 2 )
          invalid_parameter_noinfo();
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 5) + 4 * j) + 4) + 12))(LODWORD(GDeltaTime));
      }
    }
    v44 = RenderDevice::Instance();
    v45 = *(_DWORD *)v44;
    v85 = v27;
    (*(void (__thiscall **)(struct RenderDevice *, int))(v45 + 432))(v44, 28);
    v46 = RenderDevice::Instance();
    v47 = *(_DWORD *)v46;
    v84 = (void *)v29;
    v83 = 7;
    v48 = v46;
    v49 = *(void (__thiscall **)(struct RenderDevice *))(v47 + 448);
    v82 = 0;
    v49(v48);
    v50 = RenderDevice::Instance();
    v51 = *(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v50 + 448);
    v81 = a3;
    v80 = 5;
    v51(v50, 0);
    v52 = RenderDevice::Instance();
    v53 = *(void (__thiscall **)(struct RenderDevice *, _DWORD, int))(*(_DWORD *)v52 + 448);
    v78 = retaddr;
    v53(v52, 0, 6);
    v54 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, void *))(*(_DWORD *)v54 + 448))(v54, 0, 4, v84);
    v55 = RenderDevice::Instance();
    v56 = *(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v55 + 440);
    v72 = v82;
    v71 = 1;
    v70 = 0;
    v56(v55);
    v57 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v57 + 440))(v57, 0, 2, v80);
    v58 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, void *))(*(_DWORD *)v58 + 432))(v58, 26, v78);
    if ( (dword_11240B94 & 1) == 0 )
    {
      dword_11240B94 |= 1u;
      flt_11240B90 = GSeconds;
    }
    if ( GSeconds - flt_11240B90 > 10.0 )
    {
      v59 = sub_1016C920();
      sub_1016C190(v59);
      flt_11240B90 = GSeconds;
    }
    if ( HIBYTE(v69) )
    {
      v60 = *(void (__stdcall **)(_DWORD, int))(*v70 + 32);
      v76 = (double)v70[17] / 768.0;
      *(float *)&v64 = v76;
      v76 = (double)v70[16] * 0.0009765625;
      v60(LODWORD(v76), v64);
    }
  }
}
