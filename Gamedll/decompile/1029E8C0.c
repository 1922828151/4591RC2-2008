/*
 * func-name: sub_1029E8C0
 * func-address: 0x1029e8c0
 * callers: 0x1001a88e
 * callees: 0x100109dd, 0x100119a5, 0x1001a965, 0x102c9d50, 0x102c9d62, 0x102c9ea8, 0x102c9fe0
 */

int __thiscall sub_1029E8C0(CREDialog *this)
{
  struct CREControl *(__thiscall *v1)(CREDialog *__hidden, int); // esi
  float *v2; // ebx
  struct CREControl *Control; // eax
  int (__thiscall *v4)(int); // edi
  int v5; // ecx
  CRECheckBox *v6; // ebp
  int v7; // eax
  char v8; // al
  unsigned int v9; // ebp
  struct CREControl *v10; // eax
  int v11; // ecx
  int v12; // eax
  int *v13; // ecx
  _DWORD *v14; // eax
  int v15; // edx
  char *v16; // esi
  int v17; // eax
  int v18; // eax
  const wchar_t *v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // ecx
  int v23; // eax
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  const wchar_t *v27; // eax
  unsigned int Item; // eax
  struct CREControl *v29; // eax
  int v30; // ecx
  CRECheckBox *v31; // ebp
  int v32; // eax
  char v33; // al
  struct CREControl *v34; // eax
  int v35; // ecx
  CRESlider *v36; // esi
  int v37; // eax
  struct CREControl *v38; // eax
  int v39; // ecx
  CRESlider *v40; // esi
  int v41; // eax
  int v42; // eax
  struct CREControl *v43; // eax
  int v44; // ecx
  CRESlider *v45; // esi
  int v46; // eax
  double v47; // st7
  int v48; // eax
  struct CREControl *v49; // eax
  int v50; // ecx
  CRESlider *v51; // esi
  int v52; // eax
  double v53; // st7
  int v54; // eax
  struct CREControl *v55; // eax
  int v56; // ecx
  CRESlider *v57; // esi
  int v58; // eax
  double v59; // st7
  int v60; // eax
  struct CREControl *(__thiscall *v61)(CREDialog *__hidden, int); // edi
  struct CREControl *v62; // eax
  CRECheckBox *v63; // eax
  struct CREControl *v64; // eax
  CRESlider *v65; // esi
  double v66; // st7
  struct CREControl *v67; // eax
  int v68; // eax
  CRESlider *v69; // esi
  int v70; // edi
  AudioDevice *v71; // eax
  double v72; // st7
  struct CREControl *v73; // eax
  CRESlider *v74; // esi
  int v75; // eax
  int v76; // edi
  double v77; // st7
  struct CREControl *v78; // eax
  CRECheckBox *v79; // esi
  Input *v80; // eax
  char InvertPitch; // al
  struct CREControl *v82; // eax
  int v83; // eax
  CRESlider *v84; // esi
  int v85; // edi
  Input *v86; // eax
  double v87; // st7
  int v89; // [esp+70h] [ebp-19Ch]
  int v90; // [esp+70h] [ebp-19Ch]
  int v91; // [esp+70h] [ebp-19Ch]
  int v92; // [esp+7Ch] [ebp-190h]
  int v93; // [esp+80h] [ebp-18Ch]
  int v94; // [esp+84h] [ebp-188h]
  int v95; // [esp+94h] [ebp-178h]
  int v96; // [esp+94h] [ebp-178h]
  int v97; // [esp+94h] [ebp-178h]
  int v98; // [esp+94h] [ebp-178h]
  int v99; // [esp+94h] [ebp-178h]
  int v100; // [esp+94h] [ebp-178h]
  float v101; // [esp+98h] [ebp-174h]
  int v102; // [esp+98h] [ebp-174h]
  int v103; // [esp+98h] [ebp-174h]
  int v104; // [esp+98h] [ebp-174h]
  CREComboBox *v105; // [esp+9Ch] [ebp-170h]
  _BYTE v106[4]; // [esp+A0h] [ebp-16Ch] BYREF
  void *v107; // [esp+A4h] [ebp-168h]
  int v108; // [esp+A8h] [ebp-164h]
  int v109; // [esp+ACh] [ebp-160h]
  float *v110; // [esp+B0h] [ebp-15Ch]
  _BYTE v111[8]; // [esp+B4h] [ebp-158h] BYREF
  _BYTE v112[128]; // [esp+BCh] [ebp-150h] BYREF
  _BYTE v113[8]; // [esp+13Ch] [ebp-D0h] BYREF
  _BYTE v114[128]; // [esp+144h] [ebp-C8h] BYREF
  _BYTE v115[28]; // [esp+1C4h] [ebp-48h] BYREF
  _BYTE v116[28]; // [esp+1E0h] [ebp-2Ch] BYREF
  int v117; // [esp+208h] [ebp-4h]

  v1 = CREDialog::GetControl;
  v2 = (float *)this;
  v110 = (float *)this;
  Control = CREDialog::GetControl(this, 204);
  v4 = RenderDevice::Instance;
  v6 = (CRECheckBox *)_RTDynamicCast(
                        Control,
                        0,
                        &CREControl `RTTI Type Descriptor',
                        &CRECheckBox `RTTI Type Descriptor');
  if ( v6 )
  {
    v7 = RenderDevice::Instance(v5);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 308))(v7);
    CRECheckBox::SetChecked(v6, v8 == 0);
  }
  v9 = 0;
  v10 = CREDialog::GetControl((CREDialog *)v2, 202);
  v105 = (CREComboBox *)_RTDynamicCast(v10, 0, &CREControl `RTTI Type Descriptor', &CREComboBox `RTTI Type Descriptor');
  if ( v105 )
  {
    v12 = RenderDevice::Instance(v11);
    (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v12 + 316))(v12, v106);
    v13 = (int *)v107;
    v117 = 0;
    while ( v13 && v9 < (v108 - (int)v13) >> 3 )
    {
      if ( v13[2 * v9] >= 800 )
      {
        if ( v9 >= (v108 - (int)v13) >> 3 )
        {
          _invalid_parameter_noinfo();
          v13 = (int *)v107;
        }
        if ( v13[2 * v9 + 1] >= 600 )
        {
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(
            v113,
            3,
            1);
          v14 = v107;
          LOBYTE(v117) = 1;
          if ( !v107 || (v15 = v108, v9 >= (v108 - (int)v107) >> 3) )
          {
            _invalid_parameter_noinfo();
            v15 = v108;
            v14 = v107;
          }
          v16 = (char *)&v14[2 * v9];
          if ( !v14 || v9 >= (v15 - (int)v14) >> 3 )
          {
            _invalid_parameter_noinfo();
            v14 = v107;
          }
          v92 = *((_DWORD *)v16 + 1);
          v17 = std::wostream::operator<<(v114, v14[2 * v9]);
          v18 = sub_1001A965(v17, 42);
          std::wostream::operator<<(v18, v92);
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::str(v113, v116);
          LOBYTE(v117) = 2;
          v19 = (const wchar_t *)std::wstring::c_str(v116);
          CREComboBox::AddItem(v105, v19, 0);
          LOBYTE(v117) = 1;
          std::wstring::~wstring(v116);
          LOBYTE(v117) = 0;
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vbase destructor'(v113);
          v13 = (int *)v107;
        }
      }
      ++v9;
    }
    v20 = RenderDevice::Instance(v13);
    v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 296))(v20);
    v23 = RenderDevice::Instance(v22);
    v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 300))(v23);
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(
      v111,
      3,
      1);
    LOBYTE(v117) = 3;
    v25 = std::wostream::operator<<(v112, v21);
    v26 = sub_100109DD(v25, 42);
    std::wostream::operator<<(v26, v24);
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::str(v111, v115);
    LOBYTE(v117) = 4;
    v27 = (const wchar_t *)std::wstring::c_str(v115);
    Item = CREComboBox::FindItem(v105, v27);
    if ( Item == -1 )
      CREComboBox::SetSelectedByIndex(v105, 0);
    else
      CREComboBox::SetSelectedByIndex(v105, Item);
    LOBYTE(v117) = 3;
    std::wstring::~wstring(v115);
    LOBYTE(v117) = 0;
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vbase destructor'(v111);
    v117 = -1;
    if ( v107 )
      operator delete(v107);
    v1 = CREDialog::GetControl;
    v107 = 0;
    v108 = 0;
    v109 = 0;
  }
  v29 = v1((CREDialog *)v2, 208);
  v31 = (CRECheckBox *)_RTDynamicCast(v29, 0, &CREControl `RTTI Type Descriptor', &CRECheckBox `RTTI Type Descriptor');
  if ( v31 )
  {
    v32 = RenderDevice::Instance(v30);
    v33 = (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 132))(v32);
    CRECheckBox::SetChecked(v31, v33);
  }
  v34 = v1((CREDialog *)v2, 210);
  v36 = (CRESlider *)_RTDynamicCast(v34, 0, &CREControl `RTTI Type Descriptor', &CRESlider `RTTI Type Descriptor');
  if ( v36 )
  {
    v37 = RenderDevice::Instance(v35);
    v101 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v37 + 140))(v37);
    CRESlider::SetValueInternal(
      v36,
      (int)((double)(*((_DWORD *)v36 + 136) - *((_DWORD *)v36 + 135)) * v101 + (double)*((int *)v36 + 135)),
      0);
  }
  v38 = CREDialog::GetControl((CREDialog *)v2, 212);
  v40 = (CRESlider *)_RTDynamicCast(v38, 0, &CREControl `RTTI Type Descriptor', &CRESlider `RTTI Type Descriptor');
  if ( v40 )
  {
    v41 = RenderDevice::Instance(v39);
    v42 = (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 252))(v41);
    CRESlider::SetValueInternal(v40, 3 - v42, 0);
  }
  v43 = CREDialog::GetControl((CREDialog *)v2, 218);
  v45 = (CRESlider *)_RTDynamicCast(v43, 0, &CREControl `RTTI Type Descriptor', &CRESlider `RTTI Type Descriptor');
  if ( v45 )
  {
    v46 = RenderDevice::Instance(v44);
    v102 = *((_DWORD *)v45 + 135);
    v95 = *((_DWORD *)v45 + 136) - v102;
    v47 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v46 + 268))(v46) * (double)v95 + (double)v102;
    CRESlider::SetValueInternal(v45, (int)v47, 0);
    v4 = RenderDevice::Instance;
    v2 = v110;
  }
  v48 = v4(v44);
  v2[997] = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v48 + 268))(v48);
  v49 = CREDialog::GetControl((CREDialog *)v2, 214);
  v51 = (CRESlider *)_RTDynamicCast(v49, v89, 0, &CREControl `RTTI Type Descriptor');
  if ( v51 )
  {
    v52 = v4(v50);
    v103 = *((_DWORD *)v51 + 135);
    v96 = *((_DWORD *)v51 + 136) - v103;
    v53 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v52 + 272))(v52, 0) * (double)v96 + (double)v103;
    CRESlider::SetValueInternal(v51, (int)v53, 0);
    v4 = RenderDevice::Instance;
    v2 = v110;
  }
  v54 = v4(v50);
  v2[998] = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v54 + 272))(v54);
  v55 = CREDialog::GetControl((CREDialog *)v2, 216);
  v57 = (CRESlider *)_RTDynamicCast(v55, v90, 0, &CREControl `RTTI Type Descriptor');
  if ( v57 )
  {
    v58 = v4(v56);
    v104 = *((_DWORD *)v57 + 135);
    v97 = *((_DWORD *)v57 + 136) - v104;
    v59 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v58 + 276))(v58, 0) * (double)v97 + (double)v104;
    CRESlider::SetValueInternal(v57, (int)v59, 0);
    v4 = RenderDevice::Instance;
    v2 = v110;
  }
  v60 = v4(v56);
  v2[999] = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v60 + 276))(v60);
  v61 = CREDialog::GetControl;
  v93 = 0;
  v62 = CREDialog::GetControl((CREDialog *)v2, 220);
  v63 = (CRECheckBox *)_RTDynamicCast(v62, v91, 0, &CREControl `RTTI Type Descriptor');
  if ( v63 )
    CRECheckBox::SetChecked(v63, byte_103B80F3);
  v64 = CREDialog::GetControl((CREDialog *)v2, 222);
  v65 = (CRESlider *)_RTDynamicCast(v64, 0, &CREControl `RTTI Type Descriptor', &CRESlider `RTTI Type Descriptor');
  if ( v65 )
  {
    v66 = (1.0 - World::GetVisibleDistanceBias((World *)dword_103B8134)) * 100.0;
    CRESlider::SetValueInternal(v65, (int)v66, 0);
  }
  v67 = CREDialog::GetControl((CREDialog *)v2, 304);
  v68 = _RTDynamicCast(v67, 0, &CREControl `RTTI Type Descriptor', &CRESlider `RTTI Type Descriptor');
  v69 = (CRESlider *)v68;
  if ( v68 )
  {
    v70 = *(_DWORD *)(v68 + 544);
    v98 = *(_DWORD *)(v68 + 540);
    v71 = (AudioDevice *)AudioDevice::Instance(0);
    v72 = AudioDevice::GetVolume(v71) * (double)(v70 - v98) + (double)v98;
    CRESlider::SetValueInternal(v69, (int)v72, 0);
    v61 = CREDialog::GetControl;
  }
  v73 = v61((CREDialog *)v2, 302);
  v74 = (CRESlider *)_RTDynamicCast(v73, 0, &CREControl `RTTI Type Descriptor', &CRESlider `RTTI Type Descriptor');
  if ( v74 )
  {
    v75 = OggPlayer::Instance();
    v76 = *((_DWORD *)v74 + 136);
    v99 = *((_DWORD *)v74 + 135);
    v77 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v75 + 24))(v75) * (double)(v76 - v99) + (double)v99;
    CRESlider::SetValueInternal(v74, (int)v77, 0);
    v61 = CREDialog::GetControl;
  }
  v78 = v61((CREDialog *)v2, 402);
  v79 = (CRECheckBox *)_RTDynamicCast(v78, 0, &CREControl `RTTI Type Descriptor', &CRECheckBox `RTTI Type Descriptor');
  if ( v79 )
  {
    v80 = (Input *)Input::Instance(v93);
    InvertPitch = Input::GetInvertPitch(v80);
    CRECheckBox::SetChecked(v79, InvertPitch);
  }
  v82 = v61((CREDialog *)v2, 404);
  v83 = _RTDynamicCast(v82, 0, &CREControl `RTTI Type Descriptor', &CRESlider `RTTI Type Descriptor');
  v84 = (CRESlider *)v83;
  if ( v83 )
  {
    v85 = *(_DWORD *)(v83 + 544);
    v100 = *(_DWORD *)(v83 + 540);
    v86 = (Input *)Input::Instance(v93);
    v87 = Input::GetSensitivity(v86) * (double)(v85 - v100) + (double)v100;
    CRESlider::SetValueInternal(v84, (int)v87, 0);
  }
  return sub_100119A5(v93, v94);
}
