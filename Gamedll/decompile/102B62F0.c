/*
 * func-name: sub_102B62F0
 * func-address: 0x102b62f0
 * callers: none
 * callees: 0x102c9f53
 */

void __cdecl sub_102B62F0(float a1, int a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  float v6; // [esp+8h] [ebp-10h]
  float v7; // [esp+8h] [ebp-10h]

  v3 = RenderDevice::Instance(v2);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v3 + 372))(v3, 0, 0);
  std::string::operator=(&unk_103B8114, &a2);
  flt_103B8130 = a1;
  byte_103B80F4 = 1;
  if ( (dword_103B80CC & 1) == 0 )
  {
    dword_103B80CC |= 1u;
    std::string::string(&unk_103B80A8, &unk_10324DDE);
    atexit(sub_103060B0);
  }
  v6 = a1 - flt_103B80A4;
  v7 = fabs(v6);
  if ( v7 > 1.0 || (unsigned __int8)std::operator!=<char>(&a2, &unk_103B80A8) )
  {
    v5 = RenderDevice::Instance(v4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 384))(v5);
    flt_103B80A4 = a1;
    std::string::operator=(&unk_103B80A8, &a2);
  }
  std::string::~string(&a2);
}
