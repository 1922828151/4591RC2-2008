/*
 * func-name: ??1TF_rwlock_t@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000c9e0
 * callers: 0x1000cad0, 0x1000cc10
 * callees: none
 */

void __thiscall Outpop::Utility::TF_rwlock_t::~TF_rwlock_t(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
