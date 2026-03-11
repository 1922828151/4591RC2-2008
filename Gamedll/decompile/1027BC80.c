/*
 * func-name: ?SetInsideMap@CRadarMapUI@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UtagRECT@@VBBox@@@Z_0
 * func-address: 0x1027bc80
 * callers: 0x1000d42c
 * callees: 0x102c0750
 */

int __thiscall CRadarMapUI::SetInsideMap(
        int this,
        char a2,
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
        char a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22)
{
  int v23; // edi
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  int v27; // ecx
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  int v33; // ecx

  *(_BYTE *)(this + 4088) = 1;
  *(_BYTE *)(this + 4090) = 1;
  v23 = this + 4044;
  std::string::operator=(this + 4044, &a2);
  v24 = a10;
  *(_DWORD *)(this + 4072) = a9;
  v25 = a11;
  *(_DWORD *)(this + 4076) = v24;
  v26 = a12;
  *(_DWORD *)(this + 4080) = v25;
  v27 = a14;
  *(_DWORD *)(this + 4084) = v26;
  v28 = a15;
  *(_DWORD *)(this + 4008) = v27;
  v29 = a16;
  *(_DWORD *)(this + 4012) = v28;
  v30 = a17;
  *(_DWORD *)(this + 4016) = v29;
  v31 = a18;
  *(_DWORD *)(this + 4020) = v30;
  v32 = a19;
  *(_DWORD *)(this + 4024) = v31;
  *(_DWORD *)(this + 4032) = a20;
  v33 = a22;
  *(_DWORD *)(this + 4028) = v32;
  *(_DWORD *)(this + 4036) = a21;
  *(_DWORD *)(this + 4040) = v33;
  if ( !*(_BYTE *)(this + 4091) )
    CHotZonePic::SetPic(*(_DWORD *)(this + 3896), v23);
  std::string::~string(&a2);
  return sub_102C0750(&a13);
}
