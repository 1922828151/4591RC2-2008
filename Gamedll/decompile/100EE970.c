/*
 * func-name: sub_100EE970
 * func-address: 0x100ee970
 * callers: 0x10018cff
 * callees: 0x10014673
 */

int __thiscall sub_100EE970(char *this, int a2, int a3, int a4, int a5)
{
  char *v5; // esi
  void *v6; // edi

  v5 = this;
  v6 = this + 56;
  std::string::operator=(this + 56, a2);
  sub_10014673(v6);
  std::string::operator=(v5 + 176, a3);
  sub_10014673(v5 + 176);
  std::string::operator=(v5 + 116, a4);
  sub_10014673(v5 + 116);
  std::string::operator=(v5 + 236, a5);
  sub_10014673(v5 + 236);
  std::string::operator=(v5 + 356, "DamageSign.tga");
  sub_10014673(v5 + 356);
  std::string::operator=(v5 + 416, "HitSign.dds");
  sub_10014673(v5 + 416);
  std::string::operator=(v5 + 476, "Accumulate.dds");
  sub_10014673(v5 + 476);
  v5 += 536;
  std::string::operator=(v5, "Malice.dds");
  return sub_10014673(v5);
}
