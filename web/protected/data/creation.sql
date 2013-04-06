-- MySQL dump 10.11
--
-- Host: localhost    Database: suv
-- ------------------------------------------------------
-- Server version	5.0.45-community-nt

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `suv_comment`
--

DROP TABLE IF EXISTS `suv_comment`;
CREATE TABLE `suv_comment` (
  `id` bigint(20) unsigned NOT NULL auto_increment,
  `parent` bigint(20) unsigned NOT NULL default '0',
  `post` bigint(20) unsigned NOT NULL,
  `author` bigint(20) unsigned NOT NULL,
  `content` text,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `suv_comment`
--

LOCK TABLES `suv_comment` WRITE;
/*!40000 ALTER TABLE `suv_comment` DISABLE KEYS */;
/*!40000 ALTER TABLE `suv_comment` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `suv_config`
--

DROP TABLE IF EXISTS `suv_config`;
CREATE TABLE `suv_config` (
  `id` bigint(20) unsigned NOT NULL auto_increment,
  `property` varchar(20) NOT NULL,
  `value` varchar(255) default NULL,
  `created_on` datetime NOT NULL default '0000-00-00 00:00:00',
  `updated_on` datetime NOT NULL default '0000-00-00 00:00:00',
  `deleted` tinyint(1) NOT NULL default '0',
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `suv_config`
--

LOCK TABLES `suv_config` WRITE;
/*!40000 ALTER TABLE `suv_config` DISABLE KEYS */;
/*!40000 ALTER TABLE `suv_config` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `suv_log`
--

DROP TABLE IF EXISTS `suv_log`;
CREATE TABLE `suv_log` (
  `id` bigint(20) unsigned NOT NULL auto_increment,
  `operation` tinyint(3) unsigned NOT NULL,
  `user` bigint(20) unsigned NOT NULL,
  `object` bigint(20) unsigned NOT NULL default '0',
  `created_on` datetime NOT NULL default '0000-00-00 00:00:00',
  `deleted` tinyint(1) NOT NULL default '0',
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `suv_log`
--

LOCK TABLES `suv_log` WRITE;
/*!40000 ALTER TABLE `suv_log` DISABLE KEYS */;
/*!40000 ALTER TABLE `suv_log` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `suv_operation`
--

DROP TABLE IF EXISTS `suv_operation`;
CREATE TABLE `suv_operation` (
  `id` bigint(20) unsigned NOT NULL auto_increment,
  `name` varchar(20) NOT NULL,
  `description` text,
  `created_on` datetime NOT NULL default '0000-00-00 00:00:00',
  `updated_on` datetime NOT NULL default '0000-00-00 00:00:00',
  `deleted` tinyint(1) unsigned NOT NULL default '0',
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `suv_operation`
--

LOCK TABLES `suv_operation` WRITE;
/*!40000 ALTER TABLE `suv_operation` DISABLE KEYS */;
/*!40000 ALTER TABLE `suv_operation` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `suv_post`
--

DROP TABLE IF EXISTS `suv_post`;
CREATE TABLE `suv_post` (
  `id` bigint(20) unsigned NOT NULL auto_increment,
  `title` text NOT NULL,
  `author` bigint(20) unsigned NOT NULL,
  `content` text NOT NULL,
  `status` tinyint(4) NOT NULL,
  `view_count` bigint(20) unsigned NOT NULL default '0',
  `created_on` datetime NOT NULL default '0000-00-00 00:00:00',
  `updated_on` datetime NOT NULL default '0000-00-00 00:00:00',
  `deleted` tinyint(1) NOT NULL default '0',
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `suv_post`
--

LOCK TABLES `suv_post` WRITE;
/*!40000 ALTER TABLE `suv_post` DISABLE KEYS */;
/*!40000 ALTER TABLE `suv_post` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `suv_role`
--

DROP TABLE IF EXISTS `suv_role`;
CREATE TABLE `suv_role` (
  `id` tinyint(3) unsigned NOT NULL auto_increment,
  `name` varchar(20) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `suv_role`
--

LOCK TABLES `suv_role` WRITE;
/*!40000 ALTER TABLE `suv_role` DISABLE KEYS */;
/*!40000 ALTER TABLE `suv_role` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `suv_user`
--

DROP TABLE IF EXISTS `suv_user`;
CREATE TABLE `suv_user` (
  `id` bigint(20) unsigned NOT NULL auto_increment,
  `nickname` varchar(20) NOT NULL default '',
  `email` varchar(30) default NULL,
  `region` varchar(20) default NULL,
  `password` varchar(30) default '123',
  `role` tinyint(3) default NULL,
  `created_on` datetime NOT NULL default '0000-00-00 00:00:00',
  `updated_on` datetime NOT NULL default '0000-00-00 00:00:00',
  `deleted` tinyint(1) NOT NULL default '0',
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `suv_user`
--

LOCK TABLES `suv_user` WRITE;
/*!40000 ALTER TABLE `suv_user` DISABLE KEYS */;
/*!40000 ALTER TABLE `suv_user` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2013-03-25 14:47:01
