package com.niit.exercise1;

import java.util.List;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;
import com.niit.model.Books;

public class SelectBooksDriver {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		try {
			// Create the SessionFactory from standard (hibernate.cfg.xml)
			// config file.
			
			SessionFactory sessionFactory;
			Configuration configuration = new Configuration().configure("hibernate.cfg.xml");
			sessionFactory = configuration.buildSessionFactory();
			System.out.println("------------hi");
			
			Session session = sessionFactory.openSession();
			
			List<Books> allBooks = session.createQuery("from Books").list();
			if(!(allBooks.isEmpty()))
			{
				for (Books bk : allBooks) {
					System.out.println("BK_ID:" +bk.getBk_id()+ "Bk_Name : " + bk.getBk_name()+
					"Authorname:"+bk.getBk_Authorname()+"Publishername:"+bk.getBk_publishername()+
					"cust_id:"+bk.getCust_id()+"cust_name"+bk.getCust_name()+"cust_address"+bk.getCust_address());
				}
			}
			else
			{
				System.out.println("No Record Found... Please add record to view them.");
			}
		} catch (Exception ex) {
			ex.printStackTrace();
		}

	}

	}


