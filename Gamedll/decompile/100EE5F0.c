/*
 * func-name: sub_100EE5F0
 * func-address: 0x100ee5f0
 * callers: 0x1001135b
 * callees: 0x10014673
 */

int __thiscall sub_100EE5F0(char *this, int a2, int a3, int a4)
{
  char *v4; // esi
  void *v5; // edi

  v4 = this;
  v5 = this + 64;
  std::string::operator=(this + 64, a2);
  sub_10014673(v5);
  std::string::operator=(v4 + 124, a3);
  sub_10014673(v4 + 124);
  std::string::operator=(v4 + 184, a4);
  sub_10014673(v4 + 184);
  std::string::operator=(v4 + 244, "Capacitance.dds");
  sub_10014673(v4 + 244);
  v4 += 304;
  std::string::operator=(v4, "CapacitanceTrough.dds");
  return sub_10014673(v4);
}
