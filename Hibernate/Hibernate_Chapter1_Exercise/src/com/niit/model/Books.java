package com.niit.model;

import java.io.Serializable;

public class Books implements Serializable { //model class must implement serializable interface
	
	private int bk_id;   //variable must be private
	private String bk_name;
	private String bk_Authorname;
	private String bk_publishername;
	private int cust_id;
	private String cust_name;
	private String cust_address;
	
	Books() //must have empty constructor
	{
		
	}
	//all variable must have setter and getter

	public int getBk_id() {
		return bk_id;
	}

	public void setBk_id(int bk_id) {
		this.bk_id = bk_id;
	}

	public String getBk_name() {
		return bk_name;
	}

	public void setBk_name(String bk_name) {
		this.bk_name = bk_name;
	}

	public String getBk_Authorname() {
		return bk_Authorname;
	}

	public void setBk_Authorname(String bk_Authorname) {
		this.bk_Authorname = bk_Authorname;
	}

	public String getBk_publishername() {
		return bk_publishername;
	}

	public void setBk_publishername(String bk_publishername) {
		this.bk_publishername = bk_publishername;
	}

	public int getCust_id() {
		return cust_id;
	}

	public void setCust_id(int cust_id) {
		this.cust_id = cust_id;
	}

	public String getCust_name() {
		return cust_name;
	}

	public void setCust_name(String cust_name) {
		this.cust_name = cust_name;
	}

	public String getCust_address() {
		return cust_address;
	}

	public void setCust_address(String cust_address) {
		this.cust_address = cust_address;
	}
	
	
	
}
