#
# Copyright (C) 2009 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#
include $(TOPDIR)/rules.mk

PKG_VENDOR:=upointech
PKG_NAME:=xc_sdk
PKG_VERSION:=1
PKG_BASE_NAME:=xc_sdk
PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_BASE_NAME)-$(PKG_VERSION)



include $(INCLUDE_DIR)/package.mk
include $(INCLUDE_DIR)/cmake.mk

define Package/$(PKG_NAME)
  SECTION:=base
  CATEGORY:=Upointech
  TITLE:= Smart gateway demo application
  URL:=http://www.ixiaocong.com/
  MAINTAINER:=Upointech
  DEPENDS:= +libpthread 
endef

define Package/$(PKG_NAME)/description
  Demo Application for smart gateway device
endef


define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)
endef


define Build/Clean
	rm -rf $(PKG_BUILD_DIR)
endef

define Package/$(PKG_NAME)/install
	$(INSTALL_DIR) $(1)/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/gateway $(1)/bin/$(PKG_NAME)
endef

$(eval $(call BuildPackage,$(PKG_NAME)))
