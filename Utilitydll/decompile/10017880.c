/*
 * func-name: ?close@Singleton_Manager@Utility@Outpop@@SAXXZ
 * func-address: 0x10017880
 * callers: none
 * callees: 0x100177b0, 0x10018cf2
 */

void __cdecl Outpop::Utility::Singleton_Manager::close()
{
  Outpop::Utility::Singleton_Manager *v0; // esi

  if ( Outpop::Utility::Singleton_Manager::g_singleton_manager_ )
  {
    v0 = Outpop::Utility::Singleton_Manager::g_singleton_manager_;
    Outpop::Utility::Singleton_Manager::~Singleton_Manager(Outpop::Utility::Singleton_Manager::g_singleton_manager_);
    operator delete(v0);
    Outpop::Utility::Singleton_Manager::g_singleton_manager_ = 0;
  }
}
